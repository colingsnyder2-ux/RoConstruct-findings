// from server: 100% by colin
// roc 2008-06 005f5af0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5af0
//
// 005f5af0  8b442404             mov eax, dword ptr [esp + 4]
// 005f5af4  56                   push esi
// 005f5af5  8bf1                 mov esi, ecx
// 005f5af7  83f801               cmp eax, 1
// 005f5afa  7532                 jne 0x5f5b2e
// 005f5afc  b802000000           mov eax, 2
// 005f5b01  8486b0000000         test byte ptr [esi + 0xb0], al
// 005f5b07  755c                 jne 0x5f5b65
// 005f5b09  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005f5b0c  c70100000000         mov dword ptr [ecx], 0
// 005f5b12  8b5620               mov edx, dword ptr [esi + 0x20]
// 005f5b15  c70200000000         mov dword ptr [edx], 0
// 005f5b1b  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005f5b1e  c70100000000         mov dword ptr [ecx], 0
// 005f5b24  0986b0000000         or dword ptr [esi + 0xb0], eax
// 005f5b2a  5e                   pop esi
// 005f5b2b  c20400               ret 4
// 005f5b2e  83f802               cmp eax, 2
// 005f5b31  7532                 jne 0x5f5b65
// 005f5b33  f686b000000004       test byte ptr [esi + 0xb0], 4
// 005f5b3a  7529                 jne 0x5f5b65
// 005f5b3c  8b16                 mov edx, dword ptr [esi]
// 005f5b3e  8b4230               mov eax, dword ptr [edx + 0x30]
// 005f5b41  ffd0                 call eax
// 005f5b43  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005f5b46  c70100000000         mov dword ptr [ecx], 0
// 005f5b4c  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f5b4f  c70200000000         mov dword ptr [edx], 0
// 005f5b55  8b4634               mov eax, dword ptr [esi + 0x34]
// 005f5b58  c70000000000         mov dword ptr [eax], 0
// 005f5b5e  838eb000000004       or dword ptr [esi + 0xb0], 4
// 005f5b65  5e                   pop esi
// 005f5b66  c20400               ret 4





struct S {
    void f(int);
    void g();
};

void S::f(int a) {
    if (a == 1) {
        if (!(*(unsigned char*)((char*)this + 0xb0) & 2)) {
            *(int*)(*(int*)((char*)this + 0x10)) = 0;
            *(int*)(*(int*)((char*)this + 0x20)) = 0;
            *(int*)(*(int*)((char*)this + 0x30)) = 0;
            *(unsigned int*)((char*)this + 0xb0) |= 2;
        }
    } else if (a == 2) {
        if (!(*(unsigned char*)((char*)this + 0xb0) & 4)) {
            (*(void(**)(void))(*(int*)this + 0x30))();
            *(int*)(*(int*)((char*)this + 0x14)) = 0;
            *(int*)(*(int*)((char*)this + 0x24)) = 0;
            *(int*)(*(int*)((char*)this + 0x34)) = 0;
            *(unsigned int*)((char*)this + 0xb0) |= 4;
        }
    }
}
