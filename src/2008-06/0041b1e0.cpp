// from server: 100% by king_originala
// roc 2008-06 0041b1e0  unit: Marshaller  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b1e0
//
// 0041b1e0  837c241800           cmp dword ptr [esp + 0x18], 0
// 0041b1e5  7531                 jne 0x41b218
// 0041b1e7  817c240865040000     cmp dword ptr [esp + 8], 0x465
// 0041b1ef  7527                 jne 0x41b218
// 0041b1f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041b1f5  8d442418             lea eax, [esp + 0x18]
// 0041b1f9  50                   push eax
// 0041b1fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041b1fe  52                   push edx
// 0041b1ff  50                   push eax
// 0041b200  6865040000           push 0x465
// 0041b205  e806f2ffff           call 0x41a410
// 0041b20a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041b20e  8901                 mov dword ptr [ecx], eax
// 0041b210  b801000000           mov eax, 1
// 0041b215  c21800               ret 0x18
// 0041b218  33c0                 xor eax, eax
// 0041b21a  c21800               ret 0x18

struct Marshaller
{
    int dispatch(int message, int wparam, int lparam, int* handled);
    int execute(int window, int message, int wparam, int lparam,
                int* result, int handled);
};

int Marshaller::execute(int window, int message, int wparam, int lparam,
                        int* result, int handled)
{
    if (handled == 0 && message == 0x465)
    {
        *result = dispatch(0x465, wparam, lparam, &handled);
        return 1;
    }
    return 0;
}
