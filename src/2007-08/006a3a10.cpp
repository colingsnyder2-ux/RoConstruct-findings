// from server: 100% by colin
// roc 2007-08 006a3a10  unit: PAUHWND__::?$CArray  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3a10
//
// 006a3a10  8b442404             mov eax, dword ptr [esp + 4]
// 006a3a14  83ec08               sub esp, 8
// 006a3a17  56                   push esi
// 006a3a18  8bf1                 mov esi, ecx
// 006a3a1a  57                   push edi
// 006a3a1b  8d7e08               lea edi, [esi + 8]
// 006a3a1e  50                   push eax
// 006a3a1f  8bcf                 mov ecx, edi
// 006a3a21  e89afdffff           call 0x6a37c0
// 006a3a26  83f8ff               cmp eax, -1
// 006a3a29  740a                 je 0x6a3a35
// 006a3a2b  6a01                 push 1
// 006a3a2d  50                   push eax
// 006a3a2e  8bcf                 mov ecx, edi
// 006a3a30  e87bec0200           call 0x6d26b0
// 006a3a35  33ff                 xor edi, edi
// 006a3a37  397e10               cmp dword ptr [esi + 0x10], edi
// 006a3a3a  751b                 jne 0x6a3a57
// 006a3a3c  8d4c2408             lea ecx, [esp + 8]
// 006a3a40  51                   push ecx
// 006a3a41  ff1554ec7700         call dword ptr [0x77ec54]
// 006a3a47  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a3a4b  8b442408             mov eax, dword ptr [esp + 8]
// 006a3a4f  52                   push edx
// 006a3a50  50                   push eax
// 006a3a51  ff155ced7700         call dword ptr [0x77ed5c]
// 006a3a57  897e40               mov dword ptr [esi + 0x40], edi
// 006a3a5a  5f                   pop edi
// 006a3a5b  5e                   pop esi
// 006a3a5c  83c408               add esp, 8
// 006a3a5f  c20400               ret 4

struct HWND__;

struct CArray {
    void f(HWND__* hwnd);
};

struct Inner {
    int find(HWND__* hwnd);
    void removeAt(int index, int count);
};

extern "C" {
    int (__stdcall *GetCursorPos)(void* pt);
    int (__stdcall *SetCursorPos)(int x, int y);
}

void CArray::f(HWND__* hwnd) {
    int index = ((Inner*)((char*)this + 8))->find(hwnd);
    if (index != -1) {
        ((Inner*)((char*)this + 8))->removeAt(index, 1);
    }
    if (*(int*)((char*)this + 0x10) == 0) {
        int pt[2];
        GetCursorPos(pt);
        SetCursorPos(pt[0], pt[1]);
    }
    *(int*)((char*)this + 0x40) = 0;
}
