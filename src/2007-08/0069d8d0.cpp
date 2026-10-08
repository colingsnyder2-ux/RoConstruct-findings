// from server: 96% by colin
// roc 2007-08 0069d8d0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d8d0
//
// 0069d8d0  56                   push esi
// 0069d8d1  8bf1                 mov esi, ecx
// 0069d8d3  e87430f9ff           call 0x63094c
// 0069d8d8  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0069d8de  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0069d8e4  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0069d8ea  50                   push eax
// 0069d8eb  8b4220               mov eax, dword ptr [edx + 0x20]
// 0069d8ee  51                   push ecx
// 0069d8ef  682b270000           push 0x272b
// 0069d8f4  50                   push eax
// 0069d8f5  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0069d8fb  5e                   pop esi
// 0069d8fc  c3                   ret 

struct CXTPPropertyGridItemColor {
    char pad0[0x80];
    void* m_pOwner;
    char pad1[0xb8 - 0x84];
    unsigned int m_hWnd;
    char pad2[0x17c - 0xbc];
    unsigned int m_nID;
    void OnInplaceButtonDown();
};

extern "C" void __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
extern "C" void __fastcall sub_63094c(void* p);

void CXTPPropertyGridItemColor::OnInplaceButtonDown()
{
    sub_63094c(this);
    void* p = *(void**)((char*)this + 0x80);
    SendMessageA(*(void**)((char*)p + 0x20), 0x272b, *(unsigned int*)((char*)this + 0xb8), *(long*)((char*)this + 0x17c));
}
