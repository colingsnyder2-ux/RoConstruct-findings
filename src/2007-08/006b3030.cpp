// from server: 87% by colin
// roc 2007-08 006b3030  unit: CXTPResourceManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3030
//
// 006b3030  57                   push edi
// 006b3031  8bf9                 mov edi, ecx
// 006b3033  e8d8ffffff           call 0x6b3010
// 006b3038  8bc8                 mov ecx, eax
// 006b303a  e8d1fbffff           call 0x6b2c10
// 006b303f  85c0                 test eax, eax
// 006b3041  7504                 jne 0x6b3047
// 006b3043  8807                 mov byte ptr [edi], al
// 006b3045  5f                   pop edi
// 006b3046  c3                   ret 
// 006b3047  56                   push esi
// 006b3048  e8b5cef7ff           call 0x62ff02
// 006b304d  8bf0                 mov esi, eax
// 006b304f  8b460c               mov eax, dword ptr [esi + 0xc]
// 006b3052  894704               mov dword ptr [edi + 4], eax
// 006b3055  e8b6ffffff           call 0x6b3010
// 006b305a  8bc8                 mov ecx, eax
// 006b305c  e8affbffff           call 0x6b2c10
// 006b3061  89460c               mov dword ptr [esi + 0xc], eax
// 006b3064  5e                   pop esi
// 006b3065  c60701               mov byte ptr [edi], 1
// 006b3068  5f                   pop edi
// 006b3069  c3                   ret 

struct CXTPResourceManager {
    char m_bInit;
    int m_nHandle;
    void Init();
};

extern "C" void* __stdcall func_0062ff02();
extern "C" void* __stdcall func_006b3010();
extern "C" int __stdcall func_006b2c10(void*);

void CXTPResourceManager::Init()
{
    void* p = func_006b3010();
    int r = func_006b2c10(p);
    if (r == 0)
    {
        m_bInit = 0;
        return;
    }
    void* q = func_0062ff02();
    int* pi = (int*)q;
    m_nHandle = pi[3];
    void* p2 = func_006b3010();
    int r2 = func_006b2c10(p2);
    pi[3] = r2;
    m_bInit = 1;
}
