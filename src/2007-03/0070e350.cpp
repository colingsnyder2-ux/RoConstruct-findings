// from server: 100% by tester
// roc 2007-03 0070e350  unit: seg_00700000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e350
//
// 0070e350  56                   push esi
// 0070e351  8bf1                 mov esi, ecx
// 0070e353  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0070e359  e872aaf2ff           call 0x638dd0
// 0070e35e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070e362  8b10                 mov edx, dword ptr [eax]
// 0070e364  8b923c010000         mov edx, dword ptr [edx + 0x13c]
// 0070e36a  6a00                 push 0
// 0070e36c  56                   push esi
// 0070e36d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0070e371  51                   push ecx
// 0070e372  56                   push esi
// 0070e373  8bc8                 mov ecx, eax
// 0070e375  ffd2                 call edx
// 0070e377  8bc6                 mov eax, esi
// 0070e379  5e                   pop esi
// 0070e37a  c20800               ret 8

struct CXTPRibbonGroupControlPopup
{
    char pad[0xfc];
    void* field_fc;
    void* func_007190c0(void* arg1, void* arg2);
};

extern "C" void* __fastcall func_00643a40(void* p);

void* CXTPRibbonGroupControlPopup::func_007190c0(void* arg1, void* arg2)
{
    void* p = func_00643a40(field_fc);
    void** vtbl = *(void***)p;
    void* (__thiscall *fn)(void*, void*, void*, void*, void*) = (void* (__thiscall *)(void*, void*, void*, void*, void*))vtbl[0x13c / 4];
    fn(p, arg1, arg2, this, 0);
    return arg1;
}
