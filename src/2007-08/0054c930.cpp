// from server: 63% by colin
// roc 2007-08 0054c930  unit: boost::iostreams::DUoutput  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c930
//
// 0054c930  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054c934  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054c938  50                   push eax
// 0054c939  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054c93d  52                   push edx
// 0054c93e  99                   cdq
// 0054c93f  52                   push edx
// 0054c940  50                   push eax
// 0054c941  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054c945  50                   push eax
// 0054c946  e815f9ffff           call 0x54c260

extern "C" int __cdecl sub_54c260(int, int, int, int, int);

struct S {
    int f(int, int, int, int);
};

int S::f(int a, int b, int c, int d)
{
    return sub_54c260(a, b, c, d, 0);
}
