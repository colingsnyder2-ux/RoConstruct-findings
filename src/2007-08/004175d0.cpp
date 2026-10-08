// from server: 90% by colin
// roc 2007-08 004175d0  unit: Marshaller  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004175d0
//
// 004175d0  837c241800           cmp dword ptr [esp + 0x18], 0
// 004175d5  7531                 jne 0x417608
// 004175d7  817c240865040000     cmp dword ptr [esp + 8], 0x465
// 004175df  7527                 jne 0x417608
// 004175e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004175e5  8d442418             lea eax, [esp + 0x18]
// 004175e9  50                   push eax
// 004175ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 004175ee  52                   push edx
// 004175ef  50                   push eax
// 004175f0  6865040000           push 0x465
// 004175f5  e8a6f9ffff           call 0x416fa0
// 004175fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004175fe  8901                 mov dword ptr [ecx], eax
// 00417600  b801000000           mov eax, 1
// 00417605  c21800               ret 0x18
// 00417608  33c0                 xor eax, eax
// 0041760a  c21800               ret 0x18

struct Marshaller {
    int execute(int, int, int, int, int, int);
};

extern "C" int __stdcall sub_416FA0(int, int, int, int);

int Marshaller::execute(int a, int b, int c, int d, int e, int f)
{
    if (f == 0 && b == 0x465) {
        int r = sub_416FA0(0x465, c, d, (int)&f);
        *(int*)e = r;
        return 1;
    }
    return 0;
}
