// from server: 100% by colin
// roc 2007-08 00547310  unit: RBX::MD5HasherImpl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00547310
//
// 00547310  83ec08               sub esp, 8
// 00547313  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00547317  56                   push esi
// 00547318  8bf1                 mov esi, ecx
// 0054731a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054731e  8d542404             lea edx, [esp + 4]
// 00547322  52                   push edx
// 00547323  89442408             mov dword ptr [esp + 8], eax
// 00547327  894c240c             mov dword ptr [esp + 0xc], ecx
// 0054732b  e8a006f4ff           call 0x4879d0
// 00547330  83c404               add esp, 4
// 00547333  84c0                 test al, al
// 00547335  752b                 jne 0x547362
// 00547337  6a08                 push 8
// 00547339  c74608b0665400       mov dword ptr [esi + 8], 0x5466b0
// 00547340  c706c0635400         mov dword ptr [esi], 0x5463c0
// 00547346  e8ab8b0e00           call 0x62fef6
// 0054734b  83c404               add esp, 4
// 0054734e  85c0                 test eax, eax
// 00547350  740d                 je 0x54735f
// 00547352  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00547356  8908                 mov dword ptr [eax], ecx
// 00547358  8b542408             mov edx, dword ptr [esp + 8]
// 0054735c  895004               mov dword ptr [eax + 4], edx
// 0054735f  894604               mov dword ptr [esi + 4], eax
// 00547362  5e                   pop esi
// 00547363  83c408               add esp, 8
// 00547366  c20800               ret 8

struct MD5HasherImpl {
    void* field0;
    void* field4;
    void* field8;
    void construct(int a, int b);
};

extern "C" char __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void MD5HasherImpl::construct(int a, int b) {
    int local[2];
    local[0] = a;
    local[1] = b;
    if (sub_4879D0(local) == 0) {
        field8 = (void*)0x5466B0;
        field0 = (void*)0x5463C0;
        void* p = sub_62FEF6(8);
        if (p != 0) {
            *(int*)p = local[0];
            *(int*)((char*)p + 4) = local[1];
        }
        field4 = p;
    }
}
