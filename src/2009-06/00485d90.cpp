// from server: 90% by atomic.potato
// roc 2009-06 00485d90  unit: Ogre::RbxMeshPartAdapter  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485d90
//
// 00485d90  8b442404             mov eax, dword ptr [esp + 4]
// 00485d94  d9ee                 fldz 
// 00485d96  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00485d9a  d95808               fstp dword ptr [eax + 8]
// 00485d9d  8908                 mov dword ptr [eax], ecx
// 00485d9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00485da3  8b11                 mov edx, dword ptr [ecx]
// 00485da5  89500c               mov dword ptr [eax + 0xc], edx
// 00485da8  8b5104               mov edx, dword ptr [ecx + 4]
// 00485dab  895010               mov dword ptr [eax + 0x10], edx
// 00485dae  8b5108               mov edx, dword ptr [ecx + 8]
// 00485db1  895014               mov dword ptr [eax + 0x14], edx
// 00485db4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00485db7  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00485dba  895018               mov dword ptr [eax + 0x18], edx
// 00485dbd  8b542408             mov edx, dword ptr [esp + 8]
// 00485dc1  c7400400000000       mov dword ptr [eax + 4], 0
// 00485dc8  89481c               mov dword ptr [eax + 0x1c], ecx
// 00485dcb  895020               mov dword ptr [eax + 0x20], edx
// 00485dce  c21000               ret 0x10

struct RbxMeshPartAdapter {
    void func(int a, int b, int c, int d);
};

void RbxMeshPartAdapter::func(int a, int b, int c, int d)
{
    char *p = (char *)a;
    *(float *)(p + 8) = 0.0f;
    *(int *)p = c;
    int *q = (int *)d;
    *(int *)(p + 0xc) = q[0];
    *(int *)(p + 0x10) = q[1];
    *(int *)(p + 0x14) = q[2];
    *(int *)(p + 0x18) = q[3];
    *(int *)(p + 0x1c) = q[4];
    *(int *)(p + 4) = 0;
    *(int *)(p + 0x20) = b;
}
