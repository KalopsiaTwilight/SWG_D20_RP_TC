/*
 *	testsuite3/tests/TestIDLClass.h generated by engine3 IDL compiler 0.70
 */

#ifndef TESTIDLCLASS_H_
#define TESTIDLCLASS_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "system/util/Optional.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
#include "engine/util/json_utils.h"

#include "system/util/Vector.h"

#include "engine/core/ManagedObject.h"

namespace testsuite3 {
namespace tests {

class TestIDLClass : public ManagedObject {
public:
	TestIDLClass(int val);

	int getValue();

	void setValue(int val);

	void setValue2(int val1, int val2);

	void setParent(TestIDLClass* val);

	void testShit(const Vector<int>& val);

	Vector<int>* getTestVector();

	ManagedWeakReference<TestIDLClass* > getParent();

	void asyncTest();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	TestIDLClass(DummyConstructorParameter* param);

	virtual ~TestIDLClass();

	friend class TestIDLClassHelper;
};

} // namespace tests
} // namespace testsuite3

using namespace testsuite3::tests;

namespace testsuite3 {
namespace tests {

class TestIDLClassImplementation : public ManagedObjectImplementation {
	int value;

	Vector<int> testVector;

protected:
	ManagedWeakReference<TestIDLClass* > parent;

public:
	TestIDLClassImplementation(int val);

	TestIDLClassImplementation(DummyConstructorParameter* param);

	int getValue();

	void setValue(int val);

	void setValue2(int val1, int val2);

	void setParent(TestIDLClass* val);

	void testShit(const Vector<int>& val);

	Vector<int>* getTestVector();

	ManagedWeakReference<TestIDLClass* > getParent();

	void asyncTest();

	WeakReference<TestIDLClass*> _this;

	operator const TestIDLClass*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~TestIDLClassImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class TestIDLClass;
};

class TestIDLClassAdapter : public ManagedObjectAdapter {
public:
	TestIDLClassAdapter(TestIDLClass* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getValue();

	void setValue(int val);

	void setValue2(int val1, int val2);

	void setParent(TestIDLClass* val);

	void testShit(const Vector<int>& val);

	ManagedWeakReference<TestIDLClass* > getParent();

	void asyncTest();

};

class TestIDLClassHelper : public DistributedObjectClassHelper, public Singleton<TestIDLClassHelper> {
	static TestIDLClassHelper* staticInitializer;

public:
	TestIDLClassHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TestIDLClassHelper>;
};

} // namespace tests
} // namespace testsuite3

using namespace testsuite3::tests;

namespace testsuite3 {
namespace tests {

class TestIDLClassPOD : public ManagedObjectPOD {
public:
	Optional<int> value;

	Optional<Vector<int>> testVector;

	Optional<ManagedWeakReference<TestIDLClassPOD* >> parent;

	String _className;
	TestIDLClassPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~TestIDLClassPOD();

};

} // namespace tests
} // namespace testsuite3

using namespace testsuite3::tests;

#endif /*TESTIDLCLASSPOD_H_*/