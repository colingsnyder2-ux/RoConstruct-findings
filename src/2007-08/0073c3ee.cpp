// from server: 71% by colin
// roc 2007-08 0073c3ee  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c3ee
//
// 0073c3ee  8b542408             mov edx, dword ptr [esp + 8]
// 0073c3f2  8d02                 lea eax, [edx]
// 0073c3f4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c3f7  33c8                 xor ecx, eax
// 0073c3f9  e82046efff           call 0x630a1e
// 0073c3fe  b890338400           mov eax, 0x843390
// 0073c403  e91046efff           jmp 0x630a18

extern "C" int __cdecl func_00630a1e(int, int);
extern "C" int __cdecl func_00630a18(int);

int __cdecl func_0073c3ee(int a, int b)
{
    int* p = (int*)b;
    int v = p[-1] ^ (int)p;
    func_00630a1e(v, (int)p);
    return func_00630a18(0x843390);
}
