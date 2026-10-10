// from server: 36% by colin
struct QListData {
    int ref;
    int alloc;
    int begin;
    int end;
    char shared;
};

struct QList {
    QListData d;
};

struct Notifier {
    QList a;
    QList b;
    bool equals(const Notifier& other) const;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

bool Notifier::equals(const Notifier& other) const {
    int sizeA;
    if (a.d.shared) {
        sizeA = 0;
    } else {
        int e = a.d.end;
        if (e != -2 && e != 0 && e != a.d.begin) {
            _invalid_parameter_noinfo();
        }
        sizeA = a.d.end - a.d.begin;
    }

    int sizeB;
    if (other.a.d.shared) {
        sizeB = 0;
    } else {
        int e = other.a.d.end;
        if (e != -2 && e != 0 && e != other.a.d.begin) {
            _invalid_parameter_noinfo();
        }
        sizeB = other.a.d.end - other.a.d.begin;
    }

    if (sizeA != sizeB) {
        return false;
    }

    return true;
}
