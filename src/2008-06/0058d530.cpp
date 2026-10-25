// from server: 100% by Intel
// roc 2008-06 0058d530  unit: RBX::ChangeHistoryService  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d530
//
// 0058d530  8b442404             mov eax, dword ptr [esp + 4]
// 0058d534  3905d8949400         cmp dword ptr [0x9494d8], eax
// 0058d53a  7508                 jne 0x58d544
// 0058d53c  b83e000000           mov eax, 0x3e
// 0058d541  c20400               ret 4
// 0058d544  3905dc949400         cmp dword ptr [0x9494dc], eax
// 0058d54a  7508                 jne 0x58d554
// 0058d54c  b83f000000           mov eax, 0x3f
// 0058d551  c20400               ret 4
// 0058d554  8b0de0939400         mov ecx, dword ptr [0x9493e0]
// 0058d55a  3bc8                 cmp ecx, eax
// 0058d55c  7f0d                 jg 0x58d56b
// 0058d55e  390544949400         cmp dword ptr [0x949444], eax
// 0058d564  7c05                 jl 0x58d56b
// 0058d566  2bc1                 sub eax, ecx
// 0058d568  c20400               ret 4
// 0058d56b  8b0d48949400         mov ecx, dword ptr [0x949448]
// 0058d571  3bc8                 cmp ecx, eax
// 0058d573  7f10                 jg 0x58d585
// 0058d575  3905ac949400         cmp dword ptr [0x9494ac], eax
// 0058d57b  7c08                 jl 0x58d585
// 0058d57d  2bc1                 sub eax, ecx
// 0058d57f  83c01a               add eax, 0x1a
// 0058d582  c20400               ret 4
// 0058d585  8b0db0949400         mov ecx, dword ptr [0x9494b0]
// 0058d58b  3bc8                 cmp ecx, eax
// 0058d58d  7f10                 jg 0x58d59f
// 0058d58f  3905d4949400         cmp dword ptr [0x9494d4], eax
// 0058d595  7c08                 jl 0x58d59f
// 0058d597  2bc1                 sub eax, ecx
// 0058d599  83c034               add eax, 0x34
// 0058d59c  c20400               ret 4
// 0058d59f  33c9                 xor ecx, ecx
// 0058d5a1  83f83d               cmp eax, 0x3d
// 0058d5a4  0f94c1               sete cl
// 0058d5a7  83c1fe               add ecx, -2
// 0058d5aa  8bc1                 mov eax, ecx
// 0058d5ac  c20400               ret 4

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
