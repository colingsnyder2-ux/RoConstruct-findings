// from server: 76% by colin
// roc 2007-08 006a7700  unit: CXTPRibbonBar::CControlQuickAccessCommand  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7700
//
// 006a7700  56                   push esi
// 006a7701  8bf1                 mov esi, ecx
// 006a7703  e8084ef9ff           call 0x63c510
// 006a7708  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 006a770e  85c0                 test eax, eax
// 006a7710  7410                 je 0x6a7722
// 006a7712  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 006a7718  8b11                 mov edx, dword ptr [ecx]
// 006a771a  50                   push eax
// 006a771b  8b4258               mov eax, dword ptr [edx + 0x58]
// 006a771e  ffd0                 call eax
// 006a7720  5e                   pop esi
// 006a7721  c3                   ret 
// 006a7722  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 006a7728  6a01                 push 1
// 006a772a  6aff                 push -1
// 006a772c  51                   push ecx
// 006a772d  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 006a7733  e8784efdff           call 0x67c5b0
// 006a7738  8bf0                 mov esi, eax
// 006a773a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 006a7740  8b16                 mov edx, dword ptr [esi]
// 006a7742  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006a7748  83e0ef               and eax, 0xffffffef
// 006a774b  50                   push eax
// 006a774c  8bce                 mov ecx, esi
// 006a774e  ffd2                 call edx
// 006a7750  8bce                 mov ecx, esi
// 006a7752  5e                   pop esi
// 006a7753  e95826f9ff           jmp 0x639db0

struct CXTPRibbonBar_CControlQuickAccessCommand
{
    void f();
};

extern "C" void __stdcall sub_63c510();
extern "C" void __stdcall sub_67c5b0();
extern "C" void __stdcall sub_639db0();

void CXTPRibbonBar_CControlQuickAccessCommand::f()
{
    sub_63c510();
    if (*(int*)((char*)this + 0x16c) != 0)
    {
        int* p = *(int**)((char*)this + 0x170);
        void (__stdcall *fn)(int) = *(void (__stdcall**)(int))((char*)*p + 0x58);
        fn(*(int*)((char*)this + 0x16c));
        return;
    }
    int a = *(int*)((char*)this + 0x168);
    int* p = *(int**)((char*)this + 0x170);
    int r = ((int (__stdcall*)(int*, int, int, int))sub_67c5b0)(p, a, -1, 1);
    int v = *(int*)((char*)r + 0xd0);
    int* vt = *(int**)r;
    void (__stdcall *fn)(int*, int) = *(void (__stdcall**)(int*, int))((char*)vt + 0x94);
    v &= 0xffffffef;
    fn((int*)r, v);
    ((void (__stdcall*)(int*))sub_639db0)((int*)r);
}
