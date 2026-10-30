// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view roc_unit_9fa68c426bc2b6e0.cpp

// Candidate translation unit (score above; library headers required).
#include "RenderLib/Chunk.h"
#include "v8datamodel/PartInstance.h"
#include "v8datamodel/Decal.h"

namespace RBX
{
	class SpecialShape;
	class Decal;
	class Texture;

	namespace View
	{
		class View;

		class __declspec(novtable) PartChunk : public Render::Chunk
		{
		private:
			G3D::CoordinateFrame coordinateFrame;
			boost::signals::scoped_connection childAddedConnection;
			boost::signals::scoped_connection childRemovedConnection;
			boost::signals::scoped_connection ancestorChangedConnection;
			boost::signals::scoped_connection propertyChangedConnection;
			boost::signals::scoped_connection shapePropertyChangedConnection;
		protected:
			boost::shared_ptr<PartInstance> partInstance;
			G3D::ReferenceCountedPointer<Render::Material> material;
			bool materialInvalid;
			G3D::ReferenceCountedPointer<Render::Mesh> mesh;
			View* view;
			SpecialShape* specialShape;

		private:
			virtual void updateMesh() = 0;
		public:
			virtual ~PartChunk();
			virtual bool castsShadows() const;
			virtual bool cullable() const;
		protected:
			PartChunk(float polygonOffset, const boost::shared_ptr<PartInstance>& partInstance, View* view);
			void invalidateMaterial();
			void invalidateMesh();
			virtual void onPropertyChanged(const Reflection::PropertyDescriptor* descriptor);
			virtual G3D::ReferenceCountedPointer<Render::Mesh> getMesh();
			virtual const G3D::CoordinateFrame& cframe();
		private:
			void onAncestorChanged(boost::shared_ptr<Instance> ancestor);
			void onChildAdded(boost::shared_ptr<Instance> child);
			void onChildRemoved(boost::shared_ptr<Instance> child);
			void onSpecialShapeChanged();
		};

		class Part : public PartChunk, public Listener<PartInstance, CanAggregateChanged>
		{
		public:
			Part(const boost::shared_ptr<PartInstance>& partInstance, View* view);
			virtual ~Part();
			virtual G3D::ReferenceCountedPointer<Render::Material> getMaterial();
		protected:
			virtual void onPropertyChanged(const Reflection::PropertyDescriptor*);
			virtual void onEvent(const PartInstance* source, CanAggregateChanged event);
		private:
			bool usesMegaTexture() const;
			virtual void updateMesh();
		};

		class Decal : public PartChunk
		{
		private:
			boost::shared_ptr<RBX::Decal> decal;
			boost::signals::scoped_connection decalAncestorChangedConnection;
			boost::signals::scoped_connection decalPropertyChangedConnection;

		public:
			Decal(Decal&, PartInstance&, View*);
			virtual ~Decal();
			virtual G3D::ReferenceCountedPointer<Render::Material> getMaterial();
		protected:
			void onDecalPropertyChanged(const Reflection::PropertyDescriptor*);
			void onDecalAncestorChanged(boost::shared_ptr<Instance>);
		private:
			virtual void updateMesh();
		};

		class Texture : public PartChunk
		{
		private:
			boost::shared_ptr<RBX::Texture> decal;
			boost::signals::scoped_connection textureAncestorChangedConnection;
			boost::signals::scoped_connection texturePropertyChangedConnection;

		public:
			Texture(Texture&, PartInstance&, View*);
			virtual ~Texture();
			virtual G3D::ReferenceCountedPointer<Render::Material> getMaterial();
		protected:
			void onTexturePropertyChanged(const Reflection::PropertyDescriptor*);
			void onTextureAncestorChanged(boost::shared_ptr<Instance>);
		private:
			virtual void updateMesh();
		};
	}
}

#include "RbxView/View.h"
#include "v8datamodel/Workspace.h"

namespace RBX
{
	namespace View
	{
		void Decal::onDecalAncestorChanged(boost::shared_ptr<Instance> ancestor)
		{
			Workspace* workspace = Workspace::findWorkspace(decal.get());
			if (!workspace || !decal->isDescendentOf(workspace))
			{
				view->sceneManager->removeModel(this);
			}
		}
	}
}
