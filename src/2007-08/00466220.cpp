// from server: 94% by colin
// roc 2007-08 00466220  unit: DxUserInput  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466220
//
// 00466220  d9ee                 fldz 
// 00466222  8b442410             mov eax, dword ptr [esp + 0x10]
// 00466226  8b542408             mov edx, dword ptr [esp + 8]
// 0046622a  51                   push ecx
// 0046622b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046622f  d91c24               fstp dword ptr [esp]
// 00466232  6a06                 push 6
// 00466234  50                   push eax
// 00466235  8b442410             mov eax, dword ptr [esp + 0x10]
// 00466239  51                   push ecx
// 0046623a  52                   push edx
// 0046623b  50                   push eax
// 0046623c  e88ffeffff           call 0x4660d0
// 00466241  83c418               add esp, 0x18
// 00466244  c3                   ret 

extern "C" int __cdecl sub_004660D0(int, int, int, int, int, float);

struct DxUserInput
{
    int method_00466220(int, int, int, int);
};

int DxUserInput::method_00466220(int a1, int a2, int a3, int a4)
{
    return sub_004660D0(a1, a2, a3, a4, 6, 0.0f);
}
