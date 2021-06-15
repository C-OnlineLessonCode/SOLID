class IReport {
public:
	virtual ~IReport() {}
	virtual void Generate() = 0;
};
class PdfReport : public IReport {
public:
	void Generate() {

	}
};
class DocReport : public IReport {
public:
	void Generate() {

	}
};
class CsvReport : public IReport {
public:
	void Generate() {

	}
};
void GenerateReport(IReport& generator) {
	try {
		generator.Generate();
	}
	catch (...) {
	}
}

int main()
{
	CsvReport report;
	GenerateReport(report);
	// SOLID
	/*
	Single responsibility
	Open-closed
	*/
}

