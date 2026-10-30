// roc 2009-06 0048a870  unit: Ogre::RbxMeshPartAdapter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048a870
//
// 0048a870  83f902               cmp ecx, 2
// 0048a873  7d06                 jge 0x48a87b
// 0048a875  b802000000           mov eax, 2
// 0048a87a  c3                   ret 
// 0048a87b  b801000000           mov eax, 1
// 0048a880  3bc8                 cmp ecx, eax
// 0048a882  7e06                 jle 0x48a88a
// 0048a884  03c0                 add eax, eax
// 0048a886  3bc1                 cmp eax, ecx
// 0048a888  7cfa                 jl 0x48a884
// 0048a88a  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
// from server: 100% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    if ((int)this < 2)
        return 2;

    int value = 1;
    while (value < (int)this)
        value += value;

    return value;
}
}
