// roc 2007-03 0068d350  unit: seg_00680000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068d350
//
// 0068d350  8b442404             mov eax, dword ptr [esp + 4]
// 0068d354  83ec08               sub esp, 8
// 0068d357  56                   push esi
// 0068d358  8bf1                 mov esi, ecx
// 0068d35a  57                   push edi
// 0068d35b  8d7e08               lea edi, [esi + 8]
// 0068d35e  50                   push eax
// 0068d35f  8bcf                 mov ecx, edi
// 0068d361  e8daf1ffff           call 0x68c540
// 0068d366  83f8ff               cmp eax, -1
// 0068d369  740a                 je 0x68d375
// 0068d36b  6a01                 push 1
// 0068d36d  50                   push eax
// 0068d36e  8bcf                 mov ecx, edi
// 0068d370  e81bf30200           call 0x6bc690
// 0068d375  33ff                 xor edi, edi
// 0068d377  397e10               cmp dword ptr [esi + 0x10], edi
// 0068d37a  751b                 jne 0x68d397
// 0068d37c  8d4c2408             lea ecx, [esp + 8]
// 0068d380  51                   push ecx
// 0068d381  ff1524ed7700         call dword ptr [0x77ed24]
// 0068d387  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0068d38b  8b442408             mov eax, dword ptr [esp + 8]
// 0068d38f  52                   push edx
// 0068d390  50                   push eax
// 0068d391  ff15d4ed7700         call dword ptr [0x77edd4]
// 0068d397  897e40               mov dword ptr [esi + 0x40], edi
// 0068d39a  5f                   pop edi
// 0068d39b  5e                   pop esi
// 0068d39c  83c408               add esp, 8
// 0068d39f  c20400               ret 4
// copied from an identical function in another client (function ?f@CArray@ns_ROCX000033@@QAEXPAUHWND__@2@@Z)

namespace ns_ROCX000033 {
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
}
