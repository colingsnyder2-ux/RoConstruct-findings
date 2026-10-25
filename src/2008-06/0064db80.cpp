// from server: 100% by king_originala
// roc 2008-06 0064db80  unit: RBX::SimJobStage  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064db80
//
// 0064db80  8b442404             mov eax, dword ptr [esp + 4]
// 0064db84  8a5015               mov dl, byte ptr [eax + 0x15]
// 0064db87  885104               mov byte ptr [ecx + 4], dl
// 0064db8a  8b09                 mov ecx, dword ptr [ecx]
// 0064db8c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0064db90  c7412000000000       mov dword ptr [ecx + 0x20], 0
// 0064db97  c7412400000000       mov dword ptr [ecx + 0x24], 0
// 0064db9e  895128               mov dword ptr [ecx + 0x28], edx
// 0064dba1  80781400             cmp byte ptr [eax + 0x14], 0
// 0064dba5  8b5008               mov edx, dword ptr [eax + 8]
// 0064dba8  7402                 je 0x64dbac
// 0064dbaa  f7da                 neg edx
// 0064dbac  807c240800           cmp byte ptr [esp + 8], 0
// 0064dbb1  7429                 je 0x64dbdc
// 0064dbb3  56                   push esi
// 0064dbb4  8b7010               mov esi, dword ptr [eax + 0x10]
// 0064dbb7  6a38                 push 0x38
// 0064dbb9  68d0aa8200           push 0x82aad0
// 0064dbbe  56                   push esi
// 0064dbbf  8b700c               mov esi, dword ptr [eax + 0xc]
// 0064dbc2  56                   push esi
// 0064dbc3  52                   push edx
// 0064dbc4  8b5004               mov edx, dword ptr [eax + 4]
// 0064dbc7  8b00                 mov eax, dword ptr [eax]
// 0064dbc9  52                   push edx
// 0064dbca  50                   push eax
// 0064dbcb  51                   push ecx
// 0064dbcc  e86fa01500           call 0x7a7c40
// 0064dbd1  5e                   pop esi
// 0064dbd2  50                   push eax
// 0064dbd3  e808feffff           call 0x64d9e0
// 0064dbd8  59                   pop ecx
// 0064dbd9  c21400               ret 0x14
// 0064dbdc  6a38                 push 0x38
// 0064dbde  68d0aa8200           push 0x82aad0
// 0064dbe3  52                   push edx
// 0064dbe4  51                   push ecx
// 0064dbe5  e8b6a51500           call 0x7a81a0
// 0064dbea  50                   push eax
// 0064dbeb  e8f0fdffff           call 0x64d9e0
// 0064dbf0  59                   pop ecx
// 0064dbf1  c21400               ret 0x14

struct Parameters {
    int level;
    int method;
    int window_bits;
    int memory_level;
    int strategy;
    bool no_header;
    bool calculate_crc;
};

typedef void* (__cdecl *AllocFunction)(void*, unsigned int, unsigned int);
typedef void (__cdecl *FreeFunction)(void*, void*);

struct Stream {
    unsigned char padding[32];
    AllocFunction allocate;
    FreeFunction release;
    void* opaque;
    unsigned char trailing[12];
};

extern "C" int __stdcall initialize_deflate(
    Stream*, int, int, int, int, int, const char*, int);
extern "C" int __stdcall initialize_inflate(
    Stream*, int, const char*, int);
extern void __cdecl check_result(int);

struct S {
    Stream* stream;
    bool calculate_crc;

    void initialize(const Parameters&, bool, AllocFunction, FreeFunction, void*);
};

void S::initialize(const Parameters& parameters, bool compress,
                   AllocFunction, FreeFunction, void* opaque)
{
    calculate_crc = parameters.calculate_crc;
    Stream* const current = stream;
    current->allocate = 0;
    current->release = 0;
    current->opaque = opaque;

    int window_bits = parameters.window_bits;
    if (parameters.no_header)
        window_bits = -window_bits;

    int result;
    if (compress) {
        result = initialize_deflate(
            current, parameters.level, parameters.method, window_bits,
            parameters.memory_level, parameters.strategy, "1.2.3", 56);
    } else {
        result = initialize_inflate(current, window_bits, "1.2.3", 56);
    }
    check_result(result);
}
