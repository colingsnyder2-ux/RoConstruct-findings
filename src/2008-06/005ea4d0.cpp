// from server: 99% by king_originala
struct Geometry;
struct Connection;

struct Array {
    Geometry** data;
    int count;
    void reset(int, int);
};

struct Receiver {
    void accept(const void*);
};

struct Iterator {
    void* owner;
    void* node;
};

struct Filter {
    void* owner;
    unsigned char reserved[0x14];
    void* endNode;

    Iterator* find(Iterator*, Geometry**);
};

extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
}

const void* __stdcall get(Geometry*, Array*);
void* __cdecl findConnection(Geometry*, Geometry*);
Connection* __cdecl makeConnection(Geometry*, Geometry*);

struct S {
    unsigned char reserved0[0x84];
    Receiver* receiver;
    unsigned char reserved1[0x1D];
    unsigned char active;
    unsigned char reserved2[0x46];
    int version;
    Array candidates;

    void prepare(Connection*);
    void process(Connection*);
    void f(Geometry*, Filter*);
};

void S::f(Geometry* geometry, Filter* filter)
{
    ++version;
    candidates.reset(0, 0);
    receiver->accept(get(geometry, &candidates));

    for (int i = 0; i < candidates.count; ++i) {
        Geometry* candidate = candidates.data[i];
        Geometry* key = candidate;

        if (filter) {
            Iterator end;
            end.node = filter->endNode;
            end.owner = filter->owner;
            Iterator result;
            Iterator* found = filter->find(&result, &key);

            if (!found->owner || found->owner != end.owner)
                _invalid_parameter_noinfo();

            if (found->node != end.node)
                continue;
        }

        if (!findConnection(geometry, candidate)) {
            Connection* connection = makeConnection(geometry, candidate);
            if (connection) {
                prepare(connection);
                active = 1;
                process(connection);
                active = 0;
            }
        }
    }
}
