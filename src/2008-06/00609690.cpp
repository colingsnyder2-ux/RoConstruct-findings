// from server: 76% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
#define NULL 0
namespace G3D {
class AtomicInt32 {
	volatile long _value;
public:
	void increment() { InterlockedIncrement(&_value); }
	unsigned int decrement() { return InterlockedDecrement(&_value) != 0; }
};
class ReferenceCountedObject {
public:
	AtomicInt32 ReferenceCountedObject_refCount;
	void* ReferenceCountedObject_weakPointer;
	void ReferenceCountedObject_zeroWeakPointers();
	virtual ~ReferenceCountedObject() {}
};
template <class T>
class ReferenceCountedPointer {
private:
	T* m_pointer;
	void zeroPointer() {
		if (m_pointer != 0) {
			if (m_pointer->ReferenceCountedObject_refCount.decrement() == 0) {
				m_pointer->ReferenceCountedObject_zeroWeakPointers();
				delete m_pointer;
			}
			m_pointer = 0;
		}
	}
	void setPointer(T* x) {
		if (x != m_pointer) {
			zeroPointer();
			if (x != 0) {
				m_pointer = x;
				m_pointer->ReferenceCountedObject_refCount.increment();
			}
		}
	}
public:
	inline ReferenceCountedPointer() : m_pointer(0) {}
	inline ReferenceCountedPointer(const ReferenceCountedPointer<T>& p) : m_pointer(0) { setPointer(p.m_pointer); }
	inline ReferenceCountedPointer(T* p) : m_pointer(0) { setPointer(p); }
	inline ~ReferenceCountedPointer() { zeroPointer(); }
	inline const ReferenceCountedPointer<T>& operator=(const ReferenceCountedPointer<T>& p) { setPointer(p.m_pointer); return *this; }
	inline T* operator->() const { return m_pointer; }
	inline bool notNull() const { return m_pointer != 0; }
};
}

namespace RBX
{
	class Controller : public G3D::ReferenceCountedObject
	{
	public:
		enum ControllerType { NO_CONTROLLER };
		virtual void v1();
		virtual ControllerType getControllerType() const;
		virtual void v3();
		virtual bool isUserController() const;
	};

	template<class T, class U>
	class ComputeProp
	{
	private:
		mutable T val;
		mutable bool dirty;
		U* object;
		T(U::* getFunc)() const;
	public:
		T getValue() const;
		operator T() const;
	};

	class Instance
	{
	public:
		virtual ~Instance();
		char pad04[0x100];
		Instance* parent;

		template<typename Type>
		const Type* getTypedRoot() const;

		template<typename Type>
		const Type* queryTypedParent() const
		{
			return dynamic_cast<Type*>(parent);
		}
		template<typename Type>
		Type* getTypedParent() const
		{
			return static_cast<Type*>(parent);
		}
	};

	class PVInstance;
	class ControllerService
	{
	public:
		G3D::ReferenceCountedPointer<Controller> getController(Controller::ControllerType type, const PVInstance* controlledInstance);
	};

	class ServiceProvider
	{
	public:
		template<class Class>
		static Class* create(const Instance* context);
	};

	class PVInstance : public Instance
	{
	public:
		char pad108[0x170 - 0x108];
		ComputeProp<G3D::ReferenceCountedPointer<Controller>, PVInstance> TopPVController;
		char pad[0x194 - 0x170 - sizeof(ComputeProp<G3D::ReferenceCountedPointer<Controller>, PVInstance>)];
		Controller::ControllerType controllerType;

		bool isTopLevelPVInstance() const
		{
			return !queryTypedParent<PVInstance>() || getTypedRoot<PVInstance>() == getTypedParent<PVInstance>();
		}
		G3D::ReferenceCountedPointer<Controller> computeTopPVController() const;
	};

	G3D::ReferenceCountedPointer<Controller> PVInstance::computeTopPVController() const
	{
		if (!isTopLevelPVInstance())
		{
			G3D::ReferenceCountedPointer<RBX::Controller> controller;
			controller = getTypedParent<PVInstance>()->TopPVController.getValue();

			if (controller.notNull())
			{
				if (controller->getControllerType() != Controller::NO_CONTROLLER && !controller->isUserController())
					return controller;
			}
		}

		ControllerService* controllerService = ServiceProvider::create<ControllerService>(this);
		return controllerService ? controllerService->getController(controllerType, this) : NULL;
	}
}
