// roc 2011-06 007afd60  unit: RBX::ManualGlueJoint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007afd60
//
// 007afd60  56                   push esi
// 007afd61  57                   push edi
// 007afd62  8bf9                 mov edi, ecx
// 007afd64  33f6                 xor esi, esi
// 007afd66  8b07                 mov eax, dword ptr [edi]
// 007afd68  8b5014               mov edx, dword ptr [eax + 0x14]
// 007afd6b  56                   push esi
// 007afd6c  8bcf                 mov ecx, edi
// 007afd6e  ffd2                 call edx
// 007afd70  85c0                 test eax, eax
// 007afd72  7405                 je 0x7afd79
// 007afd74  397828               cmp dword ptr [eax + 0x28], edi
// 007afd77  740b                 je 0x7afd84
// 007afd79  46                   inc esi
// 007afd7a  83fe02               cmp esi, 2
// 007afd7d  7ce7                 jl 0x7afd66
// 007afd7f  5f                   pop edi
// 007afd80  32c0                 xor al, al
// 007afd82  5e                   pop esi
// 007afd83  c3                   ret 
// 007afd84  5f                   pop edi
// 007afd85  b001                 mov al, 1
// 007afd87  5e                   pop esi
// 007afd88  c3                   ret 
// copied from an identical function in another client (function ?f@ManualGlueJoint@@QAE_NXZ)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
struct ManualGlueJoint
{
    virtual void* First() = 0;
    virtual void* GetJoint(int index) = 0;
    virtual void* Third() = 0;
    virtual void* Fourth() = 0;
    virtual void* Fifth() = 0;
    virtual void* Sixth(int index) = 0;
    bool f();
};

bool ManualGlueJoint::f()
{
    int i = 0;
    while (i < 2)
    {
        void* p = Sixth(i);
        if (p != 0 && *(ManualGlueJoint**)((char*)p + 0x28) == this)
            return true;
        ++i;
    }
    return false;
}