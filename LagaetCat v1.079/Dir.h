#pragma once
#pragma once
#include <shared_mutex>
class frag {
public:
	const char* getDan1() const;
	void setDan1(const char* ii);
	const char* getDan2() const;
	void setDan2(const char* ii, int ychh);
	const char* getDan3() const;
	void setDan3(const char* ii);
	const char* getDan4() const;
	void setDan4(const char* ii);
	const char* getDan5() const;
	void setDan5(const char* ii);
	const char* getDan6() const;
	void setDan6(const char* ii);
	const char* getDan7() const;
	void setDan7(const char* ii);
	const char* getDan8() const;
	void setDan8(const char* ii);
	const char* getDan9() const;
	void setDan9(const char* ii);
	const char* getDan10() const;
	void setDan10(const char* ii);
	const char* getDan11() const;
	void setDan11(const char* ii);
	const char* getDan12() const;
	void setDan12(const char* ii);
	const char* getDan13() const;
	void setDan13(const char* ii);
	const char* getDan14() const;
	void setDan14(const char* ii);
	const char* getDan15() const;
	void setDan15(const char* ii);
	const char* getDan16() const;
	void setDan16(const char* ii);
	const char* getDan17() const;
	void setDan17(const char* ii);
	const char* getDan18() const;
	void setDan18(const char* ii);
private:
	const char* ii;

};

class Logger {
public:
	void displayMessage(const std::string& dialog, const std::string& imay);

private:

	std::shared_mutex shared_mutex;


};
