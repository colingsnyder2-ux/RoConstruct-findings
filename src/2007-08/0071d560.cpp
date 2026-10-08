// from server: 66% by colin
// roc 2007-08 0071d560  unit: CXTPScrollBase  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d560
//
// 0071d560  83ec2c               sub esp, 0x2c
// 0071d563  56                   push esi
// 0071d564  8bf1                 mov esi, ecx
// 0071d566  8b06                 mov eax, dword ptr [esi]
// 0071d568  8b500c               mov edx, dword ptr [eax + 0xc]
// 0071d56b  8d4c2404             lea ecx, [esp + 4]
// 0071d56f  51                   push ecx
// 0071d570  8bce                 mov ecx, esi
// 0071d572  ffd2                 call edx
// 0071d574  8b06                 mov eax, dword ptr [esi]
// 0071d576  8b5010               mov edx, dword ptr [eax + 0x10]
// 0071d579  8d4c2414             lea ecx, [esp + 0x14]
// 0071d57d  51                   push ecx
// 0071d57e  8bce                 mov ecx, esi
// 0071d580  ffd2                 call edx
// 0071d582  8b06                 mov eax, dword ptr [esi]
// 0071d584  8d4c2414             lea ecx, [esp + 0x14]
// 0071d588  51                   push ecx
// 0071d589  8d5604               lea edx, [esi + 4]
// 0071d58c  52                   push edx
// 0071d58d  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0071d590  8d4c240c             lea ecx, [esp + 0xc]
// 0071d594  51                   push ecx
// 0071d595  8bce                 mov ecx, esi
// 0071d597  ffd2                 call edx
// 0071d599  5e                   pop esi
// 0071d59a  83c42c               add esp, 0x2c
// 0071d59d  c3                   ret 

struct CXTPScrollBase {
    void method();
};

void CXTPScrollBase::method() {
    char buf1[16];
    char buf2[16];
    char buf3[16];
    void (__thiscall *fn2)(void*, void*);
    void (__thiscall *fn3)(void*, void*, void*);
    fn2 = *(void (__thiscall **)(void*, void*))(*(int*)this + 0xc);
    fn2(this, buf1);
    fn2 = *(void (__thiscall **)(void*, void*))(*(int*)this + 0x10);
    fn2(this, buf2);
    fn3 = *(void (__thiscall **)(void*, void*, void*))(*(int*)this + 0x1c);
    fn3(this, (char*)this + 4, buf3);
}
