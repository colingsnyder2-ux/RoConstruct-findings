// roc 2007-03 006ed320  unit: seg_006e0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ed320
//
// 006ed320  53                   push ebx
// 006ed321  55                   push ebp
// 006ed322  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006ed326  56                   push esi
// 006ed327  8bd9                 mov ebx, ecx
// 006ed329  8bb380000000         mov esi, dword ptr [ebx + 0x80]
// 006ed32f  57                   push edi
// 006ed330  83cfff               or edi, 0xffffffff
// 006ed333  85f6                 test esi, esi
// 006ed335  896b78               mov dword ptr [ebx + 0x78], ebp
// 006ed338  7423                 je 0x6ed35d
// 006ed33a  8d9b00000000         lea ebx, [ebx]
// 006ed340  8b4608               mov eax, dword ptr [esi + 8]
// 006ed343  85c0                 test eax, eax
// 006ed345  740d                 je 0x6ed354
// 006ed347  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 006ed34a  7508                 jne 0x6ed354
// 006ed34c  57                   push edi
// 006ed34d  8bcb                 mov ecx, ebx
// 006ed34f  e88cffffff           call 0x6ed2e0
// 006ed354  8b36                 mov esi, dword ptr [esi]
// 006ed356  83c701               add edi, 1
// 006ed359  85f6                 test esi, esi
// 006ed35b  75e3                 jne 0x6ed340
// 006ed35d  5f                   pop edi
// 006ed35e  5e                   pop esi
// 006ed35f  5d                   pop ebp
// 006ed360  5b                   pop ebx
// 006ed361  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTColorHex_PAUHEXCOLOR_CELL_CList@ns_ROCX000006@@QAEXH@Z)

namespace ns_ROCX000006 {
struct CXTColorHex_PAUHEXCOLOR_CELL_CList
{
    void f(int);
    void sub_70A180(int);
    char pad[0x78];
    int field_78;
    char pad2[4];
    void* field_80;
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::f(int arg)
{
    void* node = field_80;
    int idx = -1;
    field_78 = arg;
    while (node != 0)
    {
        void* data = *(void**)((char*)node + 8);
        if (data != 0 && arg == *(int*)((char*)data + 0x18))
        {
            sub_70A180(idx);
        }
        node = *(void**)node;
        idx++;
    }
}
}
