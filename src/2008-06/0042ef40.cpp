// from server: 74% by colin
// roc 2008-06 0042ef40  unit: CMainFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ef40
//
// 0042ef40  56                   push esi
// 0042ef41  8bf1                 mov esi, ecx
// 0042ef43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042ef47  e876202700           call 0x6a0fc2
// 0042ef4c  8986ec000000         mov dword ptr [esi + 0xec], eax
// 0042ef52  85c0                 test eax, eax
// 0042ef54  7504                 jne 0x42ef5a
// 0042ef56  5e                   pop esi
// 0042ef57  c20400               ret 4
// 0042ef5a  56                   push esi
// 0042ef5b  8bc8                 mov ecx, eax
// 0042ef5d  e80e492700           call 0x6a3870
// 0042ef62  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0042ef68  e8e3392700           call 0x6a2950
// 0042ef6d  b801000000           mov eax, 1
// 0042ef72  5e                   pop esi
// 0042ef73  c20400               ret 4

struct CMainFrame {
    char pad[0xec];
    void* field_ec;
    bool sub_0042ef40(void* arg);
};

struct Helper_006a3870 {
    void method(void* arg);
};

struct Helper_006a2950 {
    void method();
};

extern "C" void* __stdcall sub_006a0fc2(void* arg);

bool CMainFrame::sub_0042ef40(void* arg)
{
    void* p = sub_006a0fc2(arg);
    field_ec = p;
    if (p == 0)
        return false;
    ((Helper_006a3870*)p)->method(this);
    ((Helper_006a2950*)field_ec)->method();
    return true;
}
