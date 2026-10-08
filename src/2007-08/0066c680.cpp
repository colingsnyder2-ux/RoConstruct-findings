// from server: 67% by colin
// roc 2007-08 0066c680  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066c680
//
// 0066c680  53                   push ebx
// 0066c681  56                   push esi
// 0066c682  8bf1                 mov esi, ecx
// 0066c684  57                   push edi
// 0066c685  8d4e04               lea ecx, [esi + 4]
// 0066c688  e893ffffff           call 0x66c620
// 0066c68d  8b3db8ed7700         mov edi, dword ptr [0x77edb8]
// 0066c693  6a01                 push 1
// 0066c695  c70617000000         mov dword ptr [esi], 0x17
// 0066c69b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0066c6a2  ffd7                 call edi
// 0066c6a4  6a00                 push 0
// 0066c6a6  8bd8                 mov ebx, eax
// 0066c6a8  ffd7                 call edi
// 0066c6aa  89461c               mov dword ptr [esi + 0x1c], eax
// 0066c6ad  5f                   pop edi
// 0066c6ae  895e20               mov dword ptr [esi + 0x20], ebx
// 0066c6b1  8bc6                 mov eax, esi
// 0066c6b3  5e                   pop esi
// 0066c6b4  5b                   pop ebx
// 0066c6b5  c3                   ret 

struct CXTPToolBar_PAVCToolBarInfo_CArray {
    int m_field0;
    char pad1[20];
    int m_field18;
    int m_field1c;
    int m_field20;
    void sub_66c620();
    CXTPToolBar_PAVCToolBarInfo_CArray* construct();
};

extern "C" int __stdcall GetSystemMetrics(int);

CXTPToolBar_PAVCToolBarInfo_CArray* CXTPToolBar_PAVCToolBarInfo_CArray::construct()
{
    sub_66c620();
    m_field0 = 0x17;
    m_field18 = 0;
    int (__stdcall *fn)(int) = GetSystemMetrics;
    int a = fn(1);
    int b = fn(0);
    m_field1c = b;
    m_field20 = a;
    return this;
}
