// from server: 37% by colin
struct CMapBase {
    int f(int key, int* out);
};

struct CMapIter {
    void* m_pNode;
};

extern "C" void __stdcall sub_0066f110(void* p, int n);
extern "C" void __stdcall sub_0066f140(void* p);
extern "C" void* __stdcall sub_006d7d60(void* self, void* key);
extern "C" void __stdcall sub_006d7d90(void* self, void* key, void* val, int n);
extern "C" void* __stdcall sub_0071fa70(void* p);

int CMapBase::f(int key, int* out)
{
    int local14 = 0;
    int local18 = 0;
    int local1c = 0;
    int local20 = 0;
    int local24 = 0;
    int local28 = 0;
    int local2c = 0;
    int local30 = 0;
    int local34 = 0;
    int local38 = 0;

    sub_0066f110(&local14, 10);

    int* pKey = reinterpret_cast<int*>(key);
    int* vtbl = reinterpret_cast<int*>(*pKey);
    typedef void (__stdcall *GetFn)(int*, int, int*);
    GetFn fn = reinterpret_cast<GetFn>(vtbl[3]);
    fn(pKey, 0, &local18);

    if (local20 != 0)
        goto cleanup;

    {
        int* node = reinterpret_cast<int*>(local18);
        int* val;
        if (node != 0) {
            int* tmp = reinterpret_cast<int*>(node[2]);
            if (tmp != 0)
                val = reinterpret_cast<int*>(reinterpret_cast<char*>(tmp) - 0x20);
            else
                val = 0;
        } else {
            val = 0;
        }

        int* found = reinterpret_cast<int*>(sub_006d7d60(this, val));
        if (found == 0)
            goto cleanup;
        if (found[2] == 0)
            goto cleanup;

        int* pMap = reinterpret_cast<int*>(local20);
        int* iter = reinterpret_cast<int*>(pMap[0x90 / 4]);
        if (iter == 0)
            goto cleanup;

        while (iter != 0) {
            int* pNode = reinterpret_cast<int*>(iter[2]);
            int* next = reinterpret_cast<int*>(iter[0]);
            int* elem;
            if (pNode != 0)
                elem = reinterpret_cast<int*>(reinterpret_cast<char*>(pNode) - 0x54);
            else
                elem = 0;

            void* r = sub_0071fa70(reinterpret_cast<char*>(elem) + 0x54);
            if (r != 0) {
                int* r2 = reinterpret_cast<int*>(reinterpret_cast<char*>(r) - 0x20);
                if (r2 != 0) {
                    int* found2 = reinterpret_cast<int*>(sub_006d7d60(this, r2));
                    if (found2 != 0) {
                        if (found2[2] == found[2]) {
                            sub_006d7d90(this, elem, &local18, 2);
                            sub_0066f140(&local14);
                            return 1;
                        }
                    }
                }
            }
            iter = next;
        }
    }

cleanup:
    local38 = -1;
    sub_0066f140(&local14);
    return 0;
}
