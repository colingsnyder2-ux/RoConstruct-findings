// from server: 81% by colin
// roc 2007-08 00559670  unit: RBX::DataModel  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559670
//
// 00559670  8b442404             mov eax, dword ptr [esp + 4]
// 00559674  833800               cmp dword ptr [eax], 0
// 00559677  56                   push esi
// 00559678  8bf1                 mov esi, ecx
// 0055967a  7406                 je 0x559682
// 0055967c  50                   push eax
// 0055967d  e84ee9ffff           call 0x557fd0
// 00559682  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00559688  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0055968e  83e801               sub eax, 1
// 00559691  741b                 je 0x5596ae
// 00559693  c644240800           mov byte ptr [esp + 8], 0
// 00559698  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055969c  51                   push ecx
// 0055969d  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 005596a3  81c1d4020000         add ecx, 0x2d4
// 005596a9  e8b2f4ffff           call 0x558b60
// 005596ae  5e                   pop esi
// 005596af  c20400               ret 4

struct RBX_DataModel_Inner;

struct RBX_DataModel {
    char pad[0x188];
    void* field_188;
    void* field_18c;
    void* field_190;
    void Method(int* arg);
};

void RBX_DataModel::Method(int* arg) {
    if (*arg != 0) {
        extern void __stdcall sub_557fd0(int*);
        sub_557fd0(arg);
    }
    void* p = *(void**)((char*)this + 0x190);
    int v = *(int*)((char*)p + 0x14c);
    if (v - 1 != 0) {
        char local = 0;
        int ecx_val = *(int*)&local;
        extern void __stdcall sub_558b60(void*, int);
        void* ecx_ptr = (char*)(*(void**)((char*)this + 0x188)) + 0x2d4;
        sub_558b60(ecx_ptr, ecx_val);
    }
}
