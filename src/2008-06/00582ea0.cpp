// from server: 100% by king_originala
// roc 2008-06 00582ea0  unit: RBX::FollowCameraCommand  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582ea0
//
// 00582ea0  56                   push esi
// 00582ea1  8bf1                 mov esi, ecx
// 00582ea3  6a01                 push 1
// 00582ea5  8d4e14               lea ecx, [esi + 0x14]
// 00582ea8  e813eeffff           call 0x581cc0
// 00582ead  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00582eb3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00582eb6  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582eb9  c1f903               sar ecx, 3
// 00582ebc  85c9                 test ecx, ecx
// 00582ebe  7704                 ja 0x582ec4
// 00582ec0  32c0                 xor al, al
// 00582ec2  5e                   pop esi
// 00582ec3  c3                   ret 
// 00582ec4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00582ec7  85c9                 test ecx, ecx
// 00582ec9  7407                 je 0x582ed2
// 00582ecb  e800d7ffff           call 0x5805d0
// 00582ed0  eb02                 jmp 0x582ed4
// 00582ed2  33c0                 xor eax, eax
// 00582ed4  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00582eda  2b9048010000         sub edx, dword ptr [eax + 0x148]
// 00582ee0  5e                   pop esi
// 00582ee1  83e2fc               and edx, 0xfffffffc
// 00582ee4  83fa04               cmp edx, 4
// 00582ee7  0f94c0               sete al
// 00582eea  c3                   ret 

struct Entry {
    int data[2];
};

struct EntryList {
    char padding[0x0C];
    Entry* begin;
    Entry* end;
};

struct SourceResult {
    char padding[0x154];
    EntryList* entries;
};

struct Source {
    char padding[0x0C];
    SourceResult* get(int);
};

struct CameraResult {
    char padding[0x148];
    int** begin;
    int** end;
};

struct Provider {
    CameraResult* get();
};

struct FollowCameraCommand {
    char padding[0x14];
    Source source;
    Provider* provider;
    unsigned char isChecked();
};

unsigned char FollowCameraCommand::isChecked() {
    EntryList* entries = source.get(1)->entries;
    if ((unsigned)(entries->end - entries->begin) <= 0)
        return 0;

    CameraResult* result = provider ? provider->get() : 0;
    return (unsigned)(result->end - result->begin) == 1;
}
