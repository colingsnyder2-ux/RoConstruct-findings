// from server: 100% by colin
// roc 2007-08 00715800  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715800
//
// 00715800  56                   push esi
// 00715801  8bf1                 mov esi, ecx
// 00715803  8b06                 mov eax, dword ptr [esi]
// 00715805  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0071580b  ffd2                 call edx
// 0071580d  85c0                 test eax, eax
// 0071580f  743d                 je 0x71584e
// 00715811  8bce                 mov ecx, esi
// 00715813  e878b7ffff           call 0x710f90
// 00715818  8b10                 mov edx, dword ptr [eax]
// 0071581a  8bc8                 mov ecx, eax
// 0071581c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071581f  ffd0                 call eax
// 00715821  85c0                 test eax, eax
// 00715823  8bce                 mov ecx, esi
// 00715825  7409                 je 0x715830
// 00715827  e864b7ffff           call 0x710f90
// 0071582c  6a00                 push 0
// 0071582e  eb07                 jmp 0x715837
// 00715830  e85bb7ffff           call 0x710f90
// 00715835  6a01                 push 1
// 00715837  8b10                 mov edx, dword ptr [eax]
// 00715839  8bc8                 mov ecx, eax
// 0071583b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0071583e  ffd0                 call eax
// 00715840  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715843  6a01                 push 1
// 00715845  6a00                 push 0
// 00715847  51                   push ecx
// 00715848  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071584e  5e                   pop esi
// 0071584f  c3                   ret 

struct CXTCaptionButton {
    void OnLButtonDown();
    void* GetParent();
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

void CXTCaptionButton::OnLButtonDown()
{
    if (((int (__thiscall*)(void*))*(void**)(*(int*)this + 0x164))(this) != 0)
    {
        void* p = GetParent();
        if (((int (__thiscall*)(void*))*(void**)(*(int*)p + 0x18))(p) != 0)
        {
            void* q = GetParent();
            ((void (__thiscall*)(void*, int))*(void**)(*(int*)q + 0x1c))(q, 0);
        }
        else
        {
            void* q = GetParent();
            ((void (__thiscall*)(void*, int))*(void**)(*(int*)q + 0x1c))(q, 1);
        }
        InvalidateRect(*(void**)((char*)this + 0x20), 0, 1);
    }
}
