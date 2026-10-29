// roc 2009-12 00688790  unit: RBX::ChangeHistoryService  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00688790
//
// 00688790  8b442404             mov eax, dword ptr [esp + 4]
// 00688794  39054867b300         cmp dword ptr [0xb36748], eax
// 0068879a  7508                 jne 0x6887a4
// 0068879c  b83e000000           mov eax, 0x3e
// 006887a1  c20400               ret 4
// 006887a4  39054c67b300         cmp dword ptr [0xb3674c], eax
// 006887aa  7508                 jne 0x6887b4
// 006887ac  b83f000000           mov eax, 0x3f
// 006887b1  c20400               ret 4
// 006887b4  8b0d5066b300         mov ecx, dword ptr [0xb36650]
// 006887ba  3bc8                 cmp ecx, eax
// 006887bc  7f0d                 jg 0x6887cb
// 006887be  3905b466b300         cmp dword ptr [0xb366b4], eax
// 006887c4  7c05                 jl 0x6887cb
// 006887c6  2bc1                 sub eax, ecx
// 006887c8  c20400               ret 4
// 006887cb  8b0db866b300         mov ecx, dword ptr [0xb366b8]
// 006887d1  3bc8                 cmp ecx, eax
// 006887d3  7f10                 jg 0x6887e5
// 006887d5  39051c67b300         cmp dword ptr [0xb3671c], eax
// 006887db  7c08                 jl 0x6887e5
// 006887dd  2bc1                 sub eax, ecx
// 006887df  83c01a               add eax, 0x1a
// 006887e2  c20400               ret 4
// 006887e5  8b0d2067b300         mov ecx, dword ptr [0xb36720]
// 006887eb  3bc8                 cmp ecx, eax
// 006887ed  7f10                 jg 0x6887ff
// 006887ef  39054467b300         cmp dword ptr [0xb36744], eax
// 006887f5  7c08                 jl 0x6887ff
// 006887f7  2bc1                 sub eax, ecx
// 006887f9  83c034               add eax, 0x34
// 006887fc  c20400               ret 4
// 006887ff  33c9                 xor ecx, ecx
// 00688801  83f83d               cmp eax, 0x3d
// 00688804  0f94c1               sete cl
// 00688807  83c1fe               add ecx, -2
// 0068880a  8bc1                 mov eax, ecx
// 0068880c  c20400               ret 4
// copied from an identical function in another client (function ?getIndex@ChangeHistoryService@@QAEHH@Z)

// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// from server: 100% by tester
extern int g_9494d8;
extern int g_9494dc;
extern int g_9493e0;
extern int g_949444;
extern int g_949448;
extern int g_9494ac;
extern int g_9494b0;
extern int g_9494d4;

struct ChangeHistoryService {
    int getIndex(int value);
};

int ChangeHistoryService::getIndex(int value)
{
    if (g_9494d8 == value)
        return 0x3e;
    if (g_9494dc == value)
        return 0x3f;
    if (g_9493e0 <= value && g_949444 >= value)
        return value - g_9493e0;
    if (g_949448 <= value && g_9494ac >= value)
        return value - g_949448 + 0x1a;
    if (g_9494b0 <= value && g_9494d4 >= value)
        return value - g_9494b0 + 0x34;
    return (value == 0x3d) ? -1 : -2;
}