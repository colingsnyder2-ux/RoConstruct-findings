// from server: 50% by colin
// from server: 46% by colin
// roc 2008-06 00416370  unit: CopyVerb  size: 615 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416370
//
// 00416370  64a100000000         mov eax, dword ptr fs:[0]
// 00416376  6aff                 push -1
// 00416378  6869da7b00           push 0x7bda69
// 0041637d  50                   push eax
// 0041637e  64892500000000       mov dword ptr fs:[0], esp
// 00416385  83ec40               sub esp, 0x40
// 00416388  56                   push esi
// 00416389  8b742454             mov esi, dword ptr [esp + 0x54]
// 0041638d  8b06                 mov eax, dword ptr [esi]
// 0041638f  8b4008               mov eax, dword ptr [eax + 8]
// 00416392  57                   push edi
// 00416393  8b3d78288000         mov edi, dword ptr [0x802878]
// 00416399  50                   push eax
// 0041639a  b914969200           mov ecx, 0x929614
// 0041639f  ffd7                 call edi
// 004163a1  84c0                 test al, al
// 004163a3  740a                 je 0x4163af
// 004163a5  b901000000           mov ecx, 1
// 004163aa  e910020000           jmp 0x4165bf
// 004163af  8b06                 mov eax, dword ptr [esi]
// 004163b1  8b4008               mov eax, dword ptr [eax + 8]
// 004163b4  50                   push eax
// 004163b5  b9d0be9200           mov ecx, 0x92bed0
// 004163ba  ffd7                 call edi
// 004163bc  84c0                 test al, al
// 004163be  744c                 je 0x41640c
// 004163c0  83c604               add esi, 4
// 004163c3  56                   push esi
// 004163c4  e807fbffff           call 0x415ed0
// 004163c9  b903000000           mov ecx, 3
// 004163ce  83c404               add esp, 4
// 004163d1  66894c2408           mov word ptr [esp + 8], cx
// 004163d6  89442410             mov dword ptr [esp + 0x10], eax
// 004163da  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004163e2  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004163e6  52                   push edx
// 004163e7  8d4c240c             lea ecx, [esp + 0xc]
// 004163eb  e8b0f6ffff           call 0x415aa0
// 004163f0  8d442408             lea eax, [esp + 8]
// 004163f4  50                   push eax
// 004163f5  ff151c298000         call dword ptr [0x80291c]
// 004163fb  5f                   pop edi
// 004163fc  5e                   pop esi
// 004163fd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00416401  64890d00000000       mov dword ptr fs:[0], ecx
// 00416408  83c44c               add esp, 0x4c
// 0041640b  c3                   ret 
// 0041640c  8b06                 mov eax, dword ptr [esi]
// 0041640e  8b4808               mov ecx, dword ptr [eax + 8]
// 00416411  51                   push ecx
// 00416412  b944969200           mov ecx, 0x929644
// 00416417  ffd7                 call edi
// 00416419  84c0                 test al, al
// 0041641b  7454                 je 0x416471
// 0041641d  83c604               add esi, 4
// 00416420  56                   push esi
// 00416421  e83afbffff           call 0x415f60
// 00416426  0fb6c0               movzx eax, al
// 00416429  83c404               add esp, 4
// 0041642c  f7d8                 neg eax
// 0041642e  ba0b000000           mov edx, 0xb
// 00416433  1bc0                 sbb eax, eax
// 00416435  6689542408           mov word ptr [esp + 8], dx
// 0041643a  6689442410           mov word ptr [esp + 0x10], ax
// 0041643f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00416443  51                   push ecx
// 00416444  8d4c240c             lea ecx, [esp + 0xc]
// 00416448  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00416450  e84bf6ffff           call 0x415aa0
// 00416455  8d542408             lea edx, [esp + 8]
// 00416459  52                   push edx
// 0041645a  ff151c298000         call dword ptr [0x80291c]
// 00416460  5f                   pop edi
// 00416461  5e                   pop esi
// 00416462  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00416466  64890d00000000       mov dword ptr fs:[0], ecx
// 0041646d  83c44c               add esp, 0x4c
// 00416470  c3                   ret 
// 00416471  8b06                 mov eax, dword ptr [esi]
// 00416473  8b4008               mov eax, dword ptr [eax + 8]
// 00416476  50                   push eax
// 00416477  b9dcbe9200           mov ecx, 0x92bedc
// 0041647c  ffd7                 call edi
// 0041647e  84c0                 test al, al
// 00416480  7427                 je 0x4164a9
// 00416482  83c604               add esi, 4
// 00416485  56                   push esi
// 00416486  e865fbffff           call 0x415ff0
// 0041648b  d95c2414             fstp dword ptr [esp + 0x14]
// 0041648f  b904000000           mov ecx, 4
// 00416494  83c404               add esp, 4
// 00416497  66894c2408           mov word ptr [esp + 8], cx
// 0041649c  c744245002000000     mov dword ptr [esp + 0x50], 2
// 004164a4  e939ffffff           jmp 0x4163e2
// 004164a9  8b06                 mov eax, dword ptr [esi]
// 004164ab  8b4808               mov ecx, dword ptr [eax + 8]
// 004164ae  51                   push ecx
// 004164af  b9e8be9200           mov ecx, 0x92bee8
// 004164b4  ffd7                 call edi
// 004164b6  84c0                 test al, al
// 004164b8  743a                 je 0x4164f4
// 004164ba  83c604               add esi, 4
// 004164bd  56                   push esi
// 004164be  e8bdfbffff           call 0x416080
// 004164c3  dd5c2414             fstp qword ptr [esp + 0x14]
// 004164c7  ba05000000           mov edx, 5
// 004164cc  83c404               add esp, 4
// 004164cf  6689542408           mov word ptr [esp + 8], dx
// 004164d4  c744245003000000     mov dword ptr [esp + 0x50], 3
// 004164dc  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004164e0  50                   push eax
// 004164e1  8d4c240c             lea ecx, [esp + 0xc]
// 004164e5  e8b6f5ffff           call 0x415aa0
// 004164ea  8d4c2408             lea ecx, [esp + 8]
// 004164ee  51                   push ecx
// 004164ef  e901ffffff           jmp 0x4163f5
// 004164f4  8bce                 mov ecx, esi
// 004164f6  e815f8ffff           call 0x415d10
// 004164fb  8bce                 mov ecx, esi
// 004164fd  84c0                 test al, al
// 004164ff  7435                 je 0x416536
// 00416501  8d542428             lea edx, [esp + 0x28]
// 00416505  52                   push edx
// 00416506  e805feffff           call 0x416310
// 0041650b  8bc8                 mov ecx, eax
// 0041650d  c744245004000000     mov dword ptr [esp + 0x50], 4
// 00416515  ff1564248000         call dword ptr [0x802464]
// 0041651b  50                   push eax
// 0041651c  8d4c240c             lea ecx, [esp + 0xc]
// 00416520  e8cbfdffff           call 0x4162f0
// 00416525  8d4c2428             lea ecx, [esp + 0x28]
// 00416529  c644245006           mov byte ptr [esp + 0x50], 6
// 0041652e  ff1568248000         call dword ptr [0x802468]
// 00416534  eba6                 jmp 0x4164dc
// 00416536  e8f5f7ffff           call 0x415d30
// 0041653b  8bce                 mov ecx, esi
// 0041653d  84c0                 test al, al
// 0041653f  7438                 je 0x416579
// 00416541  8d542428             lea edx, [esp + 0x28]
// 00416545  52                   push edx
// 00416546  e8f5fdffff           call 0x416340
// 0041654b  8bc8                 mov ecx, eax
// 0041654d  c744245007000000     mov dword ptr [esp + 0x50], 7
// 00416555  ff1564248000         call dword ptr [0x802464]
// 0041655b  50                   push eax
// 0041655c  8d4c240c             lea ecx, [esp + 0xc]
// 00416560  e88bfdffff           call 0x4162f0
// 00416565  8d4c2428             lea ecx, [esp + 0x28]
// 00416569  c644245009           mov byte ptr [esp + 0x50], 9
// 0041656e  ff1568248000         call dword ptr [0x802468]
// 00416574  e963ffffff           jmp 0x4164dc
// 00416579  e8d2f7ffff           call 0x415d50
// 0041657e  84c0                 test al, al
// 00416580  743b                 je 0x4165bd
// 00416582  83c604               add esi, 4
// 00416585  56                   push esi
// 00416586  e8d5fcffff           call 0x416260
// 0041658b  50                   push eax
// 0041658c  e84f000000           call 0x4165e0
// 00416591  83c408               add esp, 8
// 00416594  50                   push eax
// 00416595  8d4c241c             lea ecx, [esp + 0x1c]
// 00416599  e882f4ffff           call 0x415a20
// 0041659e  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004165a2  52                   push edx
// 004165a3  8d4c241c             lea ecx, [esp + 0x1c]
// 004165a7  c74424540a000000     mov dword ptr [esp + 0x54], 0xa
// 004165af  e8ecf4ffff           call 0x415aa0
// 004165b4  8d442418             lea eax, [esp + 0x18]
// 004165b8  e937feffff           jmp 0x4163f4
// 004165bd  33c9                 xor ecx, ecx
// 004165bf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004165c3  66890a               mov word ptr [edx], cx
// 004165c6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004165ca  5f                   pop edi
// 004165cb  5e                   pop esi
// 004165cc  64890d00000000       mov dword ptr fs:[0], ecx
// 004165d3  83c44c               add esp, 0x4c
// 004165d6  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct Variant {
    unsigned short type;
    unsigned char data[14];
    long moveTo(Variant* destination);
};

struct std_string {
    void* pad[2];
    const char* c_str() const;
    __declspec(dllimport) ~std_string() throw();
};

struct Verb {
    void* vtable;
    void* pad;
    type_info* info;
    bool matches(const type_info&) const;
    bool matches2(const type_info&) const;
    bool matches3(const type_info&) const;
    void getText(std_string* out) const;
    void getText2(std_string* out) const;
    void getText3(std_string* out) const;
    void doIt(void* dataState);
    bool isEnabled() const;
    bool isChecked() const;
    bool isSelected() const;
    void getText4(std_string* out) const;
};

struct CopyVerb {
    void* vtable;
    void* pad;
    type_info* info;
    void doIt(void* dataState);
};

extern type_info type_info_929614;
extern type_info type_info_92bed0;
extern type_info type_info_929644;
extern type_info type_info_92bedc;
extern type_info type_info_92bee8;

extern "C" long (__stdcall *VariantClear)(Variant*);
extern "C" void (__stdcall *unknown_80291c)(Variant*);
extern "C" void* (__stdcall *unknown_802464)(void*);
extern "C" void (__stdcall *unknown_802468)(void*);

bool __cdecl getBool_415ed0(void* p);
bool __cdecl getBool_415f60(void* p);
float __cdecl getFloat_415ff0(void* p);
double __cdecl getDouble_416080(void* p);
void* __cdecl getPtr_416260(void* p);
void* __cdecl getPtr_4165e0(void* p, void* q);
void __cdecl getText_416310(void* p, std_string* out);
void __cdecl getText_416340(void* p, std_string* out);
void __cdecl construct_415a20(std_string* out, void* p);
void __cdecl construct_4162f0(std_string* out, void* p);

void CopyVerb::doIt(void* dataState)
{
    Variant result;
    if (this->info->operator==(type_info_929614)) {
        *(unsigned short*)dataState = 1;
        return;
    }
    if (this->info->operator==(type_info_92bed0)) {
        bool b = getBool_415ed0((char*)this + 4);
        result.type = 3;
        *(void**)(result.data) = (void*)b;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (this->info->operator==(type_info_929644)) {
        bool b = getBool_415f60((char*)this + 4);
        result.type = 11;
        *(unsigned short*)(result.data) = b ? 0 : 1;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (this->info->operator==(type_info_92bedc)) {
        float f = getFloat_415ff0((char*)this + 4);
        result.type = 4;
        *(float*)(result.data) = f;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (this->info->operator==(type_info_92bee8)) {
        double d = getDouble_416080((char*)this + 4);
        result.type = 5;
        *(double*)(result.data) = d;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (((Verb*)this)->matches(type_info_929614)) {
        std_string s;
        getText_416310((char*)this + 4, &s);
        void* p = unknown_802464(&s);
        Variant out;
        construct_4162f0((std_string*)&out, p);
        unknown_802468(&s);
        out.moveTo((Variant*)dataState);
        unknown_80291c(&out);
        return;
    }
    if (((Verb*)this)->matches2(type_info_929614)) {
        std_string s;
        getText_416340((char*)this + 4, &s);
        void* p = unknown_802464(&s);
        Variant out;
        construct_4162f0((std_string*)&out, p);
        unknown_802468(&s);
        out.moveTo((Variant*)dataState);
        unknown_80291c(&out);
        return;
    }
    if (((Verb*)this)->matches3(type_info_929614)) {
        void* p = getPtr_416260((char*)this + 4);
        void* q = getPtr_4165e0(p, 0);
        Variant out;
        construct_415a20((std_string*)&out, q);
        out.moveTo((Variant*)dataState);
        unknown_80291c(&out);
        return;
    }
    *(unsigned short*)dataState = 0;
}
