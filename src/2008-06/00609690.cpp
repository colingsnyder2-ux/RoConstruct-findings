// from server: 89% by EspClaude
// from server: 88% by nuck16
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_45b028a23462afbb.cpp

// Candidate translation unit (score above; library headers required).
#include "G3D/ReferenceCount.h"
#include "util/ComputeProp.h"
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
		if (queryTypedParent<PVInstance>() && getTypedRoot<PVInstance>() != getTypedParent<PVInstance>())
		{
			G3D::ReferenceCountedPointer<RBX::Controller> controller = getTypedParent<PVInstance>()->TopPVController;

			if (controller != NULL)
			{
				if (controller->getControllerType() != Controller::NO_CONTROLLER && !controller->isUserController())
					return controller;
			}
		}

		ControllerService* controllerService = ServiceProvider::create<ControllerService>(this);
		return controllerService ? controllerService->getController(controllerType, this) : NULL;
	}
}

