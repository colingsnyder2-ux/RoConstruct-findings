// from server: 59% by king_originala
namespace RBX {
    struct Instance {
        virtual ~Instance();
    };

    struct ModelInstance : Instance {
        virtual ~ModelInstance();
    };
}

extern "C" void (__cdecl * const _imp___invalid_parameter_noinfo)();

struct Iterator {
    void* owner;
    RBX::ModelInstance** position;
    Iterator();
};

struct Selection {
    void* owner;
    unsigned int reserved[2];
    RBX::ModelInstance** first;
    RBX::ModelInstance** last;

    void insert(RBX::ModelInstance* const*);
    Iterator erase(Iterator);
};

struct Change {
    RBX::Instance* added;
    unsigned int reserved;
    RBX::ModelInstance* removed;
};

struct FilteredSelection {
    unsigned int reserved[3];
    Selection selection;

    void update(Change*);
};

void FilteredSelection::update(Change* change)
{
    RBX::ModelInstance* added =
        dynamic_cast<RBX::ModelInstance*>(change->added);

    if (added)
        selection.insert(&added);

    RBX::ModelInstance* removed = change->removed;
    if (removed) {
        RBX::ModelInstance** finish = selection.last;
        if (selection.first > finish)
            _imp___invalid_parameter_noinfo();

        RBX::ModelInstance** position = selection.first;
        if (position > selection.last)
            _imp___invalid_parameter_noinfo();

        void* owner = selection.owner;

        while (position != finish) {
            if (*position == removed)
                break;
            ++position;
        }

        finish = selection.last;
        if (selection.first > finish)
            _imp___invalid_parameter_noinfo();

        if (!owner || owner != selection.owner)
            _imp___invalid_parameter_noinfo();

        if (position != finish) {
            Iterator where;
            where.owner = owner;
            where.position = position;
            selection.erase(where);
        }
    }
}
