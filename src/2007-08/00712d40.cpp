// from server: 71% by colin
// roc 2007-08 00712d40  unit: PAVCXTShadowWnd::?$CList  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712d40
//
// 00712d40  56                   push esi
// 00712d41  57                   push edi
// 00712d42  6a0a                 push 0xa
// 00712d44  8bf1                 mov esi, ecx
// 00712d46  e825feffff           call 0x712b70
// 00712d4b  8d7e1c               lea edi, [esi + 0x1c]
// 00712d4e  6a0a                 push 0xa
// 00712d50  8bcf                 mov ecx, edi
// 00712d52  c7062ce97d00         mov dword ptr [esi], 0x7de92c
// 00712d58  e813feffff           call 0x712b70
// 00712d5d  6880657c00           push 0x7c6580
// 00712d62  c7072ce97d00         mov dword ptr [edi], 0x7de92c
// 00712d68  ff15c8d27700         call dword ptr [0x77d2c8]
// 00712d6e  85c0                 test eax, eax
// 00712d70  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00712d77  740f                 je 0x712d88
// 00712d79  6890b17d00           push 0x7db190
// 00712d7e  50                   push eax
// 00712d7f  ff1588d27700         call dword ptr [0x77d288]
// 00712d85  894638               mov dword ptr [esi + 0x38], eax
// 00712d88  5f                   pop edi
// 00712d89  8bc6                 mov eax, esi
// 00712d8b  5e                   pop esi
// 00712d8c  c3                   ret 

struct CXTShadowWnd_List {
    void sub_712b70(int);
};

struct CXTShadowWnd {
    char pad0[0x1c];
    CXTShadowWnd_List m_list;
    char pad1[0x18];
    void* m_pUpdateLayeredWindow;
    CXTShadowWnd();
};

extern "C" void* __stdcall GetModuleHandleA(const char*);
extern "C" void* __stdcall GetProcAddress(void*, const char*);

CXTShadowWnd::CXTShadowWnd()
{
    CXTShadowWnd_List* pList;
    void* h;
    this->m_list.sub_712b70(0xa);
    pList = &this->m_list;
    *(void**)this = (void*)0x7de92c;
    pList->sub_712b70(0xa);
    *(void**)pList = (void*)0x7de92c;
    h = GetModuleHandleA((const char*)0x7c6580);
    this->m_pUpdateLayeredWindow = 0;
    if (h != 0)
    {
        this->m_pUpdateLayeredWindow = GetProcAddress(h, (const char*)0x7db190);
    }
}
