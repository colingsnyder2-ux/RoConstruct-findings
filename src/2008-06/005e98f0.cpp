// from server: 92% by king_originala
struct PhysicsService;

struct Part {
    char padding0[0x50];
    int index;
    char padding1[4];
    PhysicsService* service;
};

struct PartList {
    Part** data;
    int size;
    int capacity;
    void append(Part* const* part);
};

struct CleanStage {
    void f(Part* part);
};

struct FinalStage {
    void f(Part* part);
};

struct PhysicsService {
    char padding0[0x84];
    FinalStage* finalStage;
    CleanStage* cleanStage;
    char padding1[0x20];
    PartList parts;

    void f(Part* part);
};

void PhysicsService::f(Part* part)
{
    Part* entry = part;
    part->index = parts.size;
    parts.append(&entry);
    part->service = this;
    cleanStage->f(part);
    finalStage->f(part);
}
