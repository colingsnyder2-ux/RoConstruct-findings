#pragma once
#include <set>
#include "v8world/IWorldStage.h"

namespace RBX
{
	class Assembly;
	class Joint;
	class World;
	class Edge;

	class AssemblyStage : public IWorldStage
	{
	private:
		std::set<Assembly*> assemblies;
		std::set<Joint*> joints;
  
	private:
		void onJointAdded(Joint* j);
		void onJointRemoving(Joint* j);
	public:
		//AssemblyStage(const AssemblyStage&);
		AssemblyStage(IStage* upstream, World* world);
		virtual ~AssemblyStage();
	public:
		virtual StageType getStageType()
		{
			return ASSEMBLY_STAGE;
		}
		virtual void onEdgeAdded(Edge* e);
		virtual void onEdgeRemoving(Edge* e);
		void stepUi(int uiStepId);
		void onAssemblyAdded(Assembly* assembly);
		void onAssemblyRemoving(Assembly* assembly);
		void wakeAssembly(Assembly*);
		//AssemblyStage& operator=(const AssemblyStage&);
	};
}
