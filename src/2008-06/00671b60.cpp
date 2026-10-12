// from server: 46% by colin
struct OgreMesh;
struct OgreSubMesh;
struct OgreVector3 { float x, y, z; };
struct OgreAxisAlignedBox { char data[24]; };

struct OgreMeshPtr {
    OgreMesh *p;
    OgreMeshPtr& operator=(const OgreMeshPtr&);
};

extern "C" {
    float __stdcall Ogre_Mesh_getBoundingSphereRadius(const OgreMesh *);
    const OgreAxisAlignedBox& __stdcall Ogre_Mesh_getBounds(const OgreMesh *);
    OgreVector3 __stdcall Ogre_AxisAlignedBox_getCenter(const OgreAxisAlignedBox *);
    unsigned short __stdcall Ogre_Mesh_getNumSubMeshes(const OgreMesh *);
    OgreSubMesh* __stdcall Ogre_Mesh_getSubMesh(const OgreMesh *, unsigned short);
}

struct AdornRbxGfx {
    char pad[0x34];
    void *field34;
    char pad2[0x78 - 0x38];
    OgreMeshPtr meshPtr;
    void addMesh(const OgreMeshPtr&, int);
};

void AdornRbxGfx::addMesh(const OgreMeshPtr& mesh, int index)
{
    OgreMeshPtr local;
    local = meshPtr;
    OgreMesh *m = local.p;

    float radius = Ogre_Mesh_getBoundingSphereRadius(m);
    const OgreAxisAlignedBox& box = Ogre_Mesh_getBounds(m);
    OgreVector3 center = Ogre_AxisAlignedBox_getCenter(&box);

    float cx = center.x;
    float cy = center.y;
    float cz = center.z;

    unsigned short count = Ogre_Mesh_getNumSubMeshes(m);
    int i = 0;
    while (i < (int)count) {
        void *obj = *(void **)field34;
        OgreSubMesh *sm = Ogre_Mesh_getSubMesh(m, (unsigned short)i);
        void *v = (void *)((char *)obj + 0x1c4);
        void (__thiscall *fn)(void *, OgreSubMesh *, int, OgreVector3 *) =
            *(void (__thiscall **)(void *, OgreSubMesh *, int, OgreVector3 *))v;
        fn(obj, sm, index, &center);
        i++;
        count = Ogre_Mesh_getNumSubMeshes(m);
    }
}
