// from server: 72% by colin
// roc 2007-08 00636680  unit: CXTPControlComboBoxList  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636680
//
// 00636680  51                   push ecx
// 00636681  8b442408             mov eax, dword ptr [esp + 8]
// 00636685  3d25e10000           cmp eax, 0xe125
// 0063668a  7511                 jne 0x63669d
// 0063668c  83c404               add esp, 4
// 0063668f  c744240401000000     mov dword ptr [esp + 4], 1
// 00636697  ff2504ec7700         jmp dword ptr [0x77ec04]
// 0063669d  3d23e10000           cmp eax, 0xe123
// 006366a2  7410                 je 0x6366b4
// 006366a4  3d22e10000           cmp eax, 0xe122
// 006366a9  7409                 je 0x6366b4
// 006366ab  b801000000           mov eax, 1
// 006366b0  59                   pop ecx
// 006366b1  c20400               ret 4
// 006366b4  8d0424               lea eax, [esp]
// 006366b7  50                   push eax
// 006366b8  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006366bb  8d54240c             lea edx, [esp + 0xc]
// 006366bf  52                   push edx
// 006366c0  68b0000000           push 0xb0
// 006366c5  50                   push eax
// 006366c6  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006366cc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006366d0  33c0                 xor eax, eax
// 006366d2  3b0c24               cmp ecx, dword ptr [esp]
// 006366d5  0f95c0               setne al
// 006366d8  59                   pop ecx
// 006366d9  c20400               ret 4

extern "C" int __stdcall IsClipboardFormatAvailable(unsigned int);
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPControlComboBoxList {
    char pad[0x20];
    void* hwnd20;
    int method(unsigned int);
};

int CXTPControlComboBoxList::method(unsigned int msg)
{
    if (msg == 0xe125) {
        return IsClipboardFormatAvailable(1);
    }
    if (msg == 0xe123 || msg == 0xe122) {
        int result = 0;
        SendMessageA(hwnd20, 0xb0, (unsigned int)&result, (long)&result);
        return result != 0;
    }
    return 1;
}
