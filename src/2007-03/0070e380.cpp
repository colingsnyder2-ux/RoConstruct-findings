// from server: 100% by tester
// roc 2007-03 0070e380  unit: seg_00700000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e380
//
// 0070e380  83ec08               sub esp, 8
// 0070e383  56                   push esi
// 0070e384  8bf1                 mov esi, ecx
// 0070e386  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0070e38c  e83faaf2ff           call 0x638dd0
// 0070e391  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070e395  8b10                 mov edx, dword ptr [eax]
// 0070e397  8b923c010000         mov edx, dword ptr [edx + 0x13c]
// 0070e39d  6a01                 push 1
// 0070e39f  56                   push esi
// 0070e3a0  51                   push ecx
// 0070e3a1  8d4c2410             lea ecx, [esp + 0x10]
// 0070e3a5  51                   push ecx
// 0070e3a6  8bc8                 mov ecx, eax
// 0070e3a8  ffd2                 call edx
// 0070e3aa  5e                   pop esi
// 0070e3ab  83c408               add esp, 8
// 0070e3ae  c20400               ret 4

struct CXTPRibbonGroupControlPopup {
    char pad[0xfc];
    void* field_fc;
    void OnPopup(int);
};

extern "C" void* __fastcall sub_00643a40(void*);

void CXTPRibbonGroupControlPopup::OnPopup(int a)
{
    void* p = sub_00643a40(field_fc);
    void** vt = *(void***)p;
    typedef void (__thiscall *Fn)(void*, int*, int, void*, int);
    Fn fn = (Fn)vt[0x13c / 4];
    int local[2];
    fn(p, local, a, this, 1);
}
