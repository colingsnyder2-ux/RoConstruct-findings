// from server: 85% by colin
// roc 2007-08 00479dc0  unit: G3D::TextureManager::TextureArgs  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479dc0
//
// 00479dc0  53                   push ebx
// 00479dc1  56                   push esi
// 00479dc2  57                   push edi
// 00479dc3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00479dc7  8b07                 mov eax, dword ptr [edi]
// 00479dc9  8b10                 mov edx, dword ptr [eax]
// 00479dcb  8bf1                 mov esi, ecx
// 00479dcd  8bcf                 mov ecx, edi
// 00479dcf  ffd2                 call edx
// 00479dd1  33d2                 xor edx, edx
// 00479dd3  8bd8                 mov ebx, eax
// 00479dd5  f7760c               div dword ptr [esi + 0xc]
// 00479dd8  8b4608               mov eax, dword ptr [esi + 8]
// 00479ddb  8b3490               mov esi, dword ptr [eax + edx*4]
// 00479dde  85f6                 test esi, esi
// 00479de0  741e                 je 0x479e00
// 00479de2  391e                 cmp dword ptr [esi], ebx
// 00479de4  750d                 jne 0x479df3
// 00479de6  57                   push edi
// 00479de7  8d4e08               lea ecx, [esi + 8]
// 00479dea  e871ffffff           call 0x479d60
// 00479def  84c0                 test al, al
// 00479df1  7515                 jne 0x479e08
// 00479df3  8b7648               mov esi, dword ptr [esi + 0x48]
// 00479df6  85f6                 test esi, esi
// 00479df8  75e8                 jne 0x479de2
// 00479dfa  8d9b00000000         lea ebx, [ebx]
// 00479e00  5f                   pop edi
// 00479e01  5e                   pop esi
// 00479e02  32c0                 xor al, al
// 00479e04  5b                   pop ebx
// 00479e05  c20400               ret 4
// 00479e08  5f                   pop edi
// 00479e09  5e                   pop esi
// 00479e0a  b001                 mov al, 1
// 00479e0c  5b                   pop ebx
// 00479e0d  c20400               ret 4

struct TextureArgs {
    bool f(void*);
};

struct Entry {
    int key;
    char pad[4];
    Entry* next;
};

struct Manager {
    char pad0[8];
    Entry** buckets;
    unsigned int bucketCount;
};

extern "C" bool __stdcall sub_479D60(void*, void*);

bool TextureArgs::f(void* arg)
{
    Manager* mgr = (Manager*)this;
    int key = (*(int (__stdcall **)(void*))*(void**)arg)(arg);
    unsigned int idx = (unsigned int)key % mgr->bucketCount;
    Entry* e = mgr->buckets[idx];
    while (e) {
        if (e->key == key) {
            if (sub_479D60((char*)e + 8, arg))
                return true;
        }
        e = *(Entry**)((char*)e + 0x48);
    }
    return false;
}
