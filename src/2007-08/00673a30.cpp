// from server: 72% by colin
// roc 2007-08 00673a30  unit: CXTPCustomizeSheet  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673a30
//
// 00673a30  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00673a36  8b4058               mov eax, dword ptr [eax + 0x58]
// 00673a39  85c0                 test eax, eax
// 00673a3b  744c                 je 0x673a89
// 00673a3d  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00673a43  83f802               cmp eax, 2
// 00673a46  56                   push esi
// 00673a47  7413                 je 0x673a5c
// 00673a49  83f803               cmp eax, 3
// 00673a4c  740e                 je 0x673a5c
// 00673a4e  83f804               cmp eax, 4
// 00673a51  7409                 je 0x673a5c
// 00673a53  83f801               cmp eax, 1
// 00673a56  7404                 je 0x673a5c
// 00673a58  33f6                 xor esi, esi
// 00673a5a  eb05                 jmp 0x673a61
// 00673a5c  be01000000           mov esi, 1
// 00673a61  6a02                 push 2
// 00673a63  ff1504ec7700         call dword ptr [0x77ec04]
// 00673a69  85c0                 test eax, eax
// 00673a6b  740b                 je 0x673a78
// 00673a6d  85f6                 test esi, esi
// 00673a6f  7407                 je 0x673a78
// 00673a71  b801000000           mov eax, 1
// 00673a76  eb02                 jmp 0x673a7a
// 00673a78  33c0                 xor eax, eax
// 00673a7a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00673a7e  8b11                 mov edx, dword ptr [ecx]
// 00673a80  5e                   pop esi
// 00673a81  89442404             mov dword ptr [esp + 4], eax
// 00673a85  8b02                 mov eax, dword ptr [edx]
// 00673a87  ffe0                 jmp eax
// 00673a89  c20400               ret 4

extern "C" int __stdcall IsClipboardFormatAvailable(unsigned int);

struct CXTPCustomizeSheet {
    int sub_673A30(int);
};

int CXTPCustomizeSheet::sub_673A30(int arg) {
    int* p = *(int**)((char*)this + 0xb8);
    p = (int*)p[0x58 / 4];
    if (p == 0) {
        return arg;
    }
    int v = *(int*)((char*)p + 0xf8);
    int flag;
    if (v == 2 || v == 3 || v == 4 || v == 1) {
        flag = 1;
    } else {
        flag = 0;
    }
    int r = 0;
    if (IsClipboardFormatAvailable(2) != 0 && flag != 0) {
        r = 1;
    }
    int* obj = (int*)arg;
    int* vtbl = (int*)*obj;
    int (*fn)(int) = (int (*)(int))vtbl[0];
    return fn(r);
}
