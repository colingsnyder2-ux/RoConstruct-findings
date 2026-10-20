// from server: 93% by colin
// from server: 92% by king_originala
// roc 2008-06 004186d0  unit: VCContent::?$CComContainedObject  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004186d0
//
// 004186d0  55                   push ebp
// 004186d1  8bec                 mov ebp, esp
// 004186d3  6aff                 push -1
// 004186d5  68a0dc7b00           push 0x7bdca0
// 004186da  64a100000000         mov eax, dword ptr fs:[0]
// 004186e0  50                   push eax
// 004186e1  64892500000000       mov dword ptr fs:[0], esp
// 004186e8  83ec08               sub esp, 8
// 004186eb  53                   push ebx
// 004186ec  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004186ef  56                   push esi
// 004186f0  57                   push edi
// 004186f1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004186f4  85db                 test ebx, ebx
// 004186f6  7518                 jne 0x418710
// 004186f8  b803400080           mov eax, 0x80004003
// 004186fd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00418700  64890d00000000       mov dword ptr fs:[0], ecx
// 00418707  5f                   pop edi
// 00418708  5e                   pop esi
// 00418709  5b                   pop ebx
// 0041870a  8be5                 mov esp, ebp
// 0041870c  5d                   pop ebp
// 0041870d  c20c00               ret 0xc
// 00418710  bf0e000780           mov edi, 0x8007000e
// 00418715  6a3c                 push 0x3c
// 00418717  c70300000000         mov dword ptr [ebx], 0
// 0041871d  897d10               mov dword ptr [ebp + 0x10], edi
// 00418720  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00418727  e8f4812800           call 0x6a0920
// 0041872c  8bf0                 mov esi, eax
// 0041872e  83c404               add esp, 4
// 00418731  85f6                 test esi, esi
// 00418733  7423                 je 0x418758
// 00418735  8bce                 mov ecx, esi
// 00418737  e874f2ffff           call 0x4179b0
// 0041873c  c70600ec8000         mov dword ptr [esi], 0x80ec00
// 00418742  c74604d8eb8000       mov dword ptr [esi + 4], 0x80ebd8
// 00418749  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0041874f  8b01                 mov eax, dword ptr [ecx]
// 00418751  8b5004               mov edx, dword ptr [eax + 4]
// 00418754  ffd2                 call edx
// 00418756  eb02                 jmp 0x41875a
// 00418758  33f6                 xor esi, esi
// 0041875a  83c8ff               or eax, 0xffffffff
// 0041875d  8945fc               mov dword ptr [ebp - 4], eax
// 00418760  85f6                 test esi, esi
// 00418762  7436                 je 0x41879a
// 00418764  ff4608               inc dword ptr [esi + 8]
// 00418767  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0041876a  014608               add dword ptr [esi + 8], eax
// 0041876d  8b06                 mov eax, dword ptr [esi]
// 0041876f  8b10                 mov edx, dword ptr [eax]
// 00418771  53                   push ebx
// 00418772  51                   push ecx
// 00418773  56                   push esi
// 00418774  ffd2                 call edx
// 00418776  8bf8                 mov edi, eax
// 00418778  85ff                 test edi, edi
// 0041877a  741e                 je 0x41879a
// 0041877c  8b06                 mov eax, dword ptr [esi]
// 0041877e  8b5010               mov edx, dword ptr [eax + 0x10]
// 00418781  6a01                 push 1
// 00418783  8bce                 mov ecx, esi
// 00418785  ffd2                 call edx
// 00418787  eb11                 jmp 0x41879a

struct Object;

struct ObjectTable {
    long (__stdcall *query)(Object *, const void *, void **);
    void *slot1;
    void *slot2;
    void *slot3;
    void *(__thiscall *destroy)(Object *, unsigned int);
};

struct Object {
    ObjectTable *table;
    void *secondary;
    volatile long references;
    unsigned char storage[48];

    void initialize();
};

struct Module;

struct ModuleTable {
    void *slot0;
    unsigned long (__thiscall *addRef)(Module *);
};

struct Module {
    ModuleTable *table;
};

struct Exception {
    long status;
};

extern ObjectTable objectTable;
extern unsigned char secondaryTable[];
extern Module *module;

void *__cdecl operator new(unsigned int);

long __stdcall CreateInstance(void *context, const void *iid, void **result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000E;
    Object *object = 0;

    try {
        object = (Object *)operator new(60);
        if (object) {
            object->initialize();
            object->table = &objectTable;
            object->secondary = secondaryTable;
            module->table->addRef(module);
        } else {
            object = 0;
        }
    } catch (Exception &exception) {
        status = exception.status;
        object = 0;
    } catch (...) {
        object = 0;
    }

    if (object) {
        ++object->references;
        const void *requested = iid;
        --object->references;
        ObjectTable *t = object->table;
        status = t->query(object, requested, result);
        if (status != 0)
            object->table->destroy(object, 1);
    }

    return status;
}
