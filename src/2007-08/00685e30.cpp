// from server: 47% by colin
extern "C" void* __cdecl sub_62FF32(unsigned int);
extern "C" void __cdecl sub_62FF26(void*);
extern "C" void __cdecl sub_6857C0(void*, void*, void*, const char*);
extern "C" int __cdecl sub_6857A0(void*, void*, void*);

extern "C" void* __stdcall GetProcessHeap_77ddac();
extern "C" void* __stdcall HeapAlloc_77dd6c(void*, unsigned int, unsigned int);
extern "C" int __stdcall SysStringLen_77dcc8(void*);
extern "C" void __stdcall SysFreeString_77ddbc(void*);
extern "C" void* __stdcall CoTaskMemAlloc_77e6d0(unsigned int);
extern "C" char __stdcall sub_77d578(void*, int);

struct CXTPPropExchange {
    char pad[0x24];
    void* m_pData;
    int f(void* a, void* b, void* c);
};

int CXTPPropExchange::f(void* a, void* b, void* c)
{
    void* local;
    int result = 1;

    if (this->m_pData == 0) {
        GetProcessHeap_77ddac();
        unsigned int* pCount = (unsigned int*)a;
        unsigned int count = *pCount;
        local = 0;
        if (count > 0) {
            char* buf = (char*)sub_62FF32(count * 2 + 1);
            unsigned int i = 0;
            while (i < *pCount) {
                unsigned char* src = (unsigned char*)*(void**)b;
                unsigned char v = src[i];
                buf[i * 2] = (char)((v & 0xf) + 0x41);
                buf[i * 2 + 1] = (char)((v >> 4) + 0x41);
                i++;
            }
            buf[*pCount * 2] = 0;
            HeapAlloc_77dd6c(&local, 0, 0);
            sub_62FF26(buf);
        }
        sub_6857C0(this, &local, b, (const char*)0x785954);
        return result;
    } else {
        GetProcessHeap_77ddac();
        local = 0;
        int r = sub_6857A0(this, b, &local);
        if (r != 0) {
            int len = SysStringLen_77dcc8(&local);
            if (len > 0) {
                int n = SysStringLen_77dcc8(&local);
                if (n != 0) {
                    if ((n & 0x80000001) == 0) {
                        int half = n / 2;
                        if (this->m_pData == 0) {
                            this->m_pData = CoTaskMemAlloc_77e6d0(half);
                            *(int*)c = half;
                            if (this->m_pData == 0) {
                                SysFreeString_77ddbc(&local);
                                return 0;
                            }
                        } else {
                            if (*(unsigned int*)b < (unsigned int)half) {
                                SysFreeString_77ddbc(&local);
                                return 0;
                            }
                        }
                        int i = 0;
                        while (i < n) {
                            char hi = sub_77d578(&local, i + 1);
                            char lo = sub_77d578(&local, i);
                            ((unsigned char*)this->m_pData)[i / 2] =
                                (unsigned char)((hi - 1) * 16 + lo - 0x41);
                            i += 2;
                        }
                    } else {
                        SysFreeString_77ddbc(&local);
                        return 0;
                    }
                } else {
                    SysFreeString_77ddbc(&local);
                    return 0;
                }
            }
        }
        SysFreeString_77ddbc(&local);
        return result;
    }
}
