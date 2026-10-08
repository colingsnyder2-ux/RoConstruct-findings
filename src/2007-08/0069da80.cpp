// from server: 94% by colin
// roc 2007-08 0069da80  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069da80
//
// 0069da80  56                   push esi
// 0069da81  8bf1                 mov esi, ecx
// 0069da83  ff153cec7700         call dword ptr [0x77ec3c]
// 0069da89  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0069da8f  8b06                 mov eax, dword ptr [esi]
// 0069da91  8b542408             mov edx, dword ptr [esp + 8]
// 0069da95  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0069da9b  51                   push ecx
// 0069da9c  52                   push edx
// 0069da9d  8bce                 mov ecx, esi
// 0069da9f  ffd0                 call eax
// 0069daa1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0069daa4  6a00                 push 0
// 0069daa6  6a00                 push 0
// 0069daa8  6a10                 push 0x10
// 0069daaa  51                   push ecx
// 0069daab  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0069dab1  5e                   pop esi
// 0069dab2  c20400               ret 4

extern "C" int __stdcall ReleaseCapture();
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct CXTPPropertyGridItemColor {
    void OnInplaceButtonDown(int);
};

void CXTPPropertyGridItemColor::OnInplaceButtonDown(int param) {
    ReleaseCapture();
    int v = *(int*)((char*)this + 0x17c);
    void** vt = *(void***)this;
    void (__thiscall *fn)(void*, int, int) = *(void (__thiscall **)(void*, int, int))((char*)vt + 0x140);
    fn(this, param, v);
    PostMessageA(*(void**)((char*)this + 0x20), 0x10, 0, 0);
}
