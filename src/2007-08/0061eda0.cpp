// from server: 86% by colin
// roc 2007-08 0061eda0  unit: RBX::ScoreHud  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061eda0
//
// 0061eda0  51                   push ecx
// 0061eda1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061eda5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061eda9  53                   push ebx
// 0061edaa  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061edae  56                   push esi
// 0061edaf  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061edb3  57                   push edi
// 0061edb4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061edb8  c644240c00           mov byte ptr [esp + 0xc], 0
// 0061edbd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061edc1  50                   push eax
// 0061edc2  51                   push ecx
// 0061edc3  52                   push edx
// 0061edc4  57                   push edi
// 0061edc5  56                   push esi
// 0061edc6  53                   push ebx
// 0061edc7  e884f6ffff           call 0x61e450
// 0061edcc  2bf3                 sub esi, ebx
// 0061edce  83c418               add esp, 0x18
// 0061edd1  c1fe04               sar esi, 4
// 0061edd4  c1e604               shl esi, 4
// 0061edd7  8bc7                 mov eax, edi
// 0061edd9  5f                   pop edi
// 0061edda  2bc6                 sub eax, esi
// 0061eddc  5e                   pop esi
// 0061eddd  5b                   pop ebx
// 0061edde  59                   pop ecx
// 0061eddf  c3                   ret 

struct RBX_ScoreHud {
    char pad[4];
    int func_0061eda0(int a, int b, int c, int d, int e);
};

extern "C" int __cdecl func_0061e450(int, int, int, int, int, int);

int RBX_ScoreHud::func_0061eda0(int a, int b, int c, int d, int e)
{
    char local = 0;
    func_0061e450(a, b, c, d, e, *(int*)&local);
    int diff = b - a;
    diff = (diff >> 4) << 4;
    return d - diff;
}
