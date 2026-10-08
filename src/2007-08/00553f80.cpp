// from server: 100% by colin
// roc 2007-08 00553f80  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00553f80
//
// 00553f80  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 00553f86  8b442404             mov eax, dword ptr [esp + 4]
// 00553f8a  8908                 mov dword ptr [eax], ecx
// 00553f8c  c20400               ret 4

struct S {
    char pad[0xec];
    int field_ec;
    int get(int* out);
};

int S::get(int* out) {
    *out = field_ec;
    return (int)out;
}
