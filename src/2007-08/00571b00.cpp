// from server: 52% by colin
// roc 2007-08 00571b00  unit: RBX::worker_thread::Udata  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571b00

typedef unsigned int size_t;

class type_info {
public:
    bool operator==(const type_info& rhs) const;
};

extern "C" bool __stdcall type_info_equal(const type_info* lhs, const type_info* rhs);

void* __cdecl worker_thread_get(void* key, unsigned int id);

void* __cdecl worker_thread_get(void* key, unsigned int id)
{
    if (id == 2) {
        void* p = key;
        if (!type_info_equal((const type_info*)0x89fb58, (const type_info*)p)) {
            p = 0;
        }
        return p;
    }
    return 0;
}
