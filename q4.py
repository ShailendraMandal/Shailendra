def compute_gross_salary(basic, grade):
    hra = 0.20 * basic
    da = 0.50 * basic
    
    if grade == 'A':
        allow = 1700
    elif grade == 'B':
        allow = 1500
    else:
        allow = 1300
    
    pf = 0.11 * basic
    
    gross_salary = basic + hra + da + allow - pf
    return gross_salary

# Example 1
basic_A = 10000
grade_A = 'A'
gross_salary_A = compute_gross_salary(basic_A, grade_A)
print(f"Gross Salary for Grade {grade_A}: {gross_salary_A}")

# Example 2
basic_B = 4567
grade_B = 'B'
gross_salary_B = compute_gross_salary(basic_B, grade_B)
print(f"Gross Salary for Grade {grade_B}: {gross_salary_B}")

