// from server: 100% by king_originala
// roc 2008-06 004e9020  unit: RBX::ViewNew::Texture  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9020
//
// 004e9020  51                   push ecx
// 004e9021  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e9025  33d2                 xor edx, edx
// 004e9027  891424               mov dword ptr [esp], edx
// 004e902a  3bc2                 cmp eax, edx
// 004e902c  7428                 je 0x4e9056
// 004e902e  56                   push esi
// 004e902f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e9033  52                   push edx
// 004e9034  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e9038  52                   push edx
// 004e9039  8d542420             lea edx, [esp + 0x20]
// 004e903d  52                   push edx
// 004e903e  56                   push esi
// 004e903f  50                   push eax
// 004e9040  e89be50900           call 0x5875e0
// 004e9045  8bc8                 mov ecx, eax
// 004e9047  83c110               add ecx, 0x10
// 004e904a  e821feffff           call 0x4e8e70
// 004e904f  8bc6                 mov eax, esi
// 004e9051  5e                   pop esi
// 004e9052  59                   pop ecx
// 004e9053  c21000               ret 0x10
// 004e9056  8b442408             mov eax, dword ptr [esp + 8]
// 004e905a  895004               mov dword ptr [eax + 4], edx
// 004e905d  895008               mov dword ptr [eax + 8], edx
// 004e9060  88500c               mov byte ptr [eax + 0xc], dl
// 004e9063  59                   pop ecx
// 004e9064  c21000               ret 0x10

struct Result {
    int unused;
    int first;
    int second;
    unsigned char flag;
};

struct Tail {
    void finish();
};

struct Product {
    char padding[16];
    Tail tail;
};

struct S {
    Result* f(Result* out, void* object, int value, int context);
    Product& make(void* object, Result* out, int* context, int value, int zero);
};

Result* S::f(Result* out, void* object, int value, int context)
{
    volatile int local = 0;
    if (object) {
        make(object, out, &context, value, 0).tail.finish();
    } else {
        out->first = 0;
        out->second = 0;
        out->flag = 0;
    }
    return out;
}
