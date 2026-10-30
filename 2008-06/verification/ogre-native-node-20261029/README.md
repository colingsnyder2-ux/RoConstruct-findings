# Ogre node layout correction, 2026-10-29

The earlier 552-byte empty RbxSceneNode claim was wrong: its allocation and vtable identify SDK SceneNode. Actual RbxSceneNode allocates584 bytes, with32 bytes of additional ordered-cache storage at552. Exact cache key/pointee types remain unknown. Constructor, caller and RTTI evidence are attached.

Accepted source comments and current module provenance now mark the declaration as an incomplete RTTI identity view. No new integrations or server credits are claimed. Replayed95/95 native targets exact; all337 forced roots pass code, data and actual linker-map ownership, preserving every prior root. Fresh module links without unresolved symbols and exits0; all four GPU modes retain batch counts1/1/2/1 and matching red/magenta pixel readbacks. Complete native node/entity geometry remains unfinished. Historical intermediate source snapshots retain their original contents; this correction supersedes their empty-layout inference.
