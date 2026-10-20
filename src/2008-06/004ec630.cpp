// from server: 89% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lang: cpp
// roc-lib: rbxgs-dll roc_mesh_cache_flush_9679ea4a46335872.cpp

// Candidate translation unit (score above; library headers required).
#include <RenderLib/Mesh.h>
#include <G3D/Table.h>
#include <boost/thread/recursive_mutex.hpp>
#include <boost/thread/once.hpp>
#include <util/NormalId.h>
#include <map>
// Key declarations mirror authentic RbxView/MeshFactory.h. This prefix is never
// allocated here; native 004d9560 proves table/mutex/maps at 0/10/1c/3c.
struct DecalKeyProof {G3D::Vector3 size;RBX::NormalId face;bool operator<(const DecalKeyProof&) const;};
struct TextureKeyProof:DecalKeyProof {G3D::Vector2 studsPerTile;bool operator<(const TextureKeyProof&) const;};
typedef G3D::ReferenceCountedPointer<RBX::Render::Mesh> MeshRef;
typedef G3D::Table<G3D::Vector3,MeshRef> MeshSizeCache;
typedef G3D::Table<unsigned,MeshSizeCache> MeshSurfaceCache;
struct MeshCachePrefix {
 MeshSurfaceCache meshes;
 boost::recursive_mutex mutex;
 std::map<DecalKeyProof,MeshRef> decals;
 std::map<TextureKeyProof,MeshRef> textures;
};
extern MeshCachePrefix* meshCache;
extern boost::once_flag meshCacheOnce;
void initializeMeshCache();
void flushUnusedMeshCache() {
 boost::call_once(initializeMeshCache,meshCacheOnce);
 MeshCachePrefix* cache=meshCache;
 boost::recursive_mutex::scoped_lock lock(cache->mutex);
 for(MeshSurfaceCache::Iterator group=cache->meshes.begin();group!=cache->meshes.end();group++)
  for(MeshSizeCache::Iterator item=group->value.begin();item!=group->value.end();item++)
   if(item->value.notNull()&&item->value.isLastReference()) item->value=NULL;
 for(std::map<DecalKeyProof,MeshRef>::iterator item=cache->decals.begin();item!=cache->decals.end();++item)
  if(item->second.notNull()&&item->second.isLastReference()) item->second=NULL;
 for(std::map<TextureKeyProof,MeshRef>::iterator item=cache->textures.begin();item!=cache->textures.end();++item)
  if(item->second.notNull()&&item->second.isLastReference()) item->second=NULL;
}
