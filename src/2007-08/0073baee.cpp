// from server: 65% by colin
// roc 2007-08 0073baee  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073baee
//
// 0073baee  8b542408             mov edx, dword ptr [esp + 8]
// 0073baf2  8d02                 lea eax, [edx]
// 0073baf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073baf7  33c8                 xor ecx, eax
// 0073baf9  e8204fefff           call 0x630a1e
// 0073bafe  b80c298400           mov eax, 0x84290c
// 0073bb03  e9104fefff           jmp 0x630a18

extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18(int);

int __cdecl sub_73baee(int, int, int a3)
{
    int* p = (int*)a3;
    int v = *((int*)((char*)p - 4));
    v ^= (int)p;
    sub_630a1e(v);
    return sub_630a18(0x84290c);
}
