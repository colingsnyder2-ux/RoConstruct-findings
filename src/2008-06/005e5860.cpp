// from server: 89% by EspClaude
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_espclaude_37136eeccf6b8dd4.cpp

// Candidate translation unit (score above; library headers required).
#undef _RELEASEASSERT
#include "v8datamodel/JointInstance.h"
#include "v8tree/Instance.h"
#include "v8tree/Service.h"
#include "v8world/World.h"
#include "util/IRenderable.h"

namespace RBX { struct JointsServiceExePad { virtual void exePadSlot(); char exePad[0x3c]; }; }
namespace RBX
{
	class JointsService : public NonFactoryProduct<Instance, NULL>, 
						  public Service,
						  public IRenderableBucket,
						  public JointsServiceExePad,
						  public Listener<World, AutoJoin>,
						  public Listener<World, AutoDestroy>
	{
	public:
		World* world;

	private:
		virtual void onDescendentAdded(Instance* instance);
		virtual void onDescendentRemoving(const boost::shared_ptr<Instance>& instance);

		virtual bool askAddChild(const Instance* instance) const
		{
			return dynamic_cast<const JointInstance*>(instance) != NULL;
		}

		virtual XmlElement* write()
		{
			return NULL;
		}

		virtual void onServiceProvider(const ServiceProvider* oldProvider, const ServiceProvider* newProvider);
		virtual void onEvent(const World* source, AutoDestroy event);
		virtual void onEvent(const World* source, AutoJoin event);
	public:
		JointsService()
			: world(NULL)
		{
			setName("JointsService");
		}
	};
}

#include "v8datamodel/Workspace.h"

namespace RBX
{
	void JointsService::onEvent(const World* source, AutoDestroy event)
	{
		RBXASSERT(event.joint != NULL);

		IJointOwner* jointOwner = event.joint->getJointOwner();
		RBXASSERT(jointOwner);

		if (jointOwner)
			static_cast<JointInstance*>(jointOwner)->setParent(NULL);
	}

	void JointsService::onEvent(const World* source, AutoJoin event)
	{
		RBXASSERT(event.joint != NULL);
		RBXASSERT(event.joint->getJointOwner() == NULL);

		boost::shared_ptr<JointInstance> ji;
		
		switch (event.joint->getJointType())
		{
		case Joint::SNAP_JOINT:
			ji = Creatable::create<Snap>(event.joint);
			break;
		case Joint::WELD_JOINT:
			ji = Creatable::create<Weld>(event.joint);
			break;
		case Joint::GLUE_JOINT:
			ji = Creatable::create<Glue>(event.joint);
			break;
		case Joint::ROTATE_JOINT:
			ji = Creatable::create<Rotate>(event.joint);
			break;
		case Joint::ROTATE_P_JOINT:
			ji = Creatable::create<RotateP>(event.joint);
			break;
		case Joint::ROTATE_V_JOINT:
			ji = Creatable::create<RotateV>(event.joint);
			break;
		default:
			RBXASSERT(0);
		}

		ji->setParent(this);
	}

	void JointsService::onServiceProvider(const ServiceProvider* oldProvider, const ServiceProvider* newProvider)
	{
		Notifier<World,AutoJoin>::disconnect(world, this);
		Notifier<World,AutoDestroy>::disconnect(world, this);

		world = NULL;
		Instance::onServiceProvider(oldProvider, newProvider);
		if (Workspace* workspace = ServiceProvider::find<Workspace>(newProvider))
			world = workspace->getWorld();

		Notifier<World,AutoJoin>::connect(world, this);
		Notifier<World,AutoDestroy>::connect(world, this);
	}

	void JointsService::onDescendentAdded(Instance* instance)
	{
		Instance::onDescendentAdded(instance);

		IRenderable* renderable = dynamic_cast<IRenderable*>(instance);
		if (renderable)
			onAdded(renderable);
	}

	void JointsService::onDescendentRemoving(const boost::shared_ptr<Instance>& instance)
	{
		IRenderable* renderable = dynamic_cast<IRenderable*>(instance.get());
		if (renderable)
			onRemoving(renderable);

		Instance::onDescendentRemoving(instance);
	}
}
