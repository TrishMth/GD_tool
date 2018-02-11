#pragma once
#pragma region Internal Includes
#include "IVariable.h"
#include "IntegerVariable.h"
#pragma endregion 
#pragma region External Includes
#include <string>
#pragma endregion 

namespace GD_Tool
{
	namespace Mainframework
	{
		class FloatVariable :public IVariable
		{
		public: 
			/**
			*Default Constructor of the FloatVariable class which inherits from IVariable
			*
			* @param type The type of the current Variable
			* @param value The value of the current Variable
			*/
			FloatVariable(const float& value, const std::string& name);
			/**
			* Getter function, to get the value of the integer variable
			*
			* @return The value of the integer variable
			*/
			int32_t GetValue() const;




			/**
			* Operator override for the add operator (int32_t)
			*
			* @param value The integer value you want to add to the integer variable
			* @return The result of the calculation
			*/
			float operator+(const int32_t& value) const;
			/**
			* Operator override for the add operator (float)
			*
			* @param value The float value you want to add to the integer variable. Warning possible data loss cause of rounding!
			* @return The rounded result of the calculation
			*/
			float operator+(const float& value) const;
			/**
			* Operator override for the substract operator (int32_t)
			*
			* @param value The integer value you want to substract from the integer variable
			* @return The result of the calculation
			*/
			float operator-(const int32_t& value) const;
			/**
			* Operator override for the substract operator (float)
			*
			* @param value The float value you want to substract from the integer variable. Warning possible data loss cause of rounding!
			* @return The rounded result of the calculation
			*/
			float operator-(const float& value) const;
			/**
			* Operator override for the multiplication operator (int32_t)
			*
			* @param value The integer value you want to multiplicate with the integer variable
			* @return The result of the calculation
			*/
			float operator*(const int32_t& value) const;
			/**
			* Operator override for the multiplication operator (float)
			*
			* @param value The float value you want to multiplicate with the integer variable. Warning possible data loss cause of rounding!
			* @return The rounded result of the calculation
			*/
			float operator*(const float& value) const;
			/**
			* Operator override for the multiplication operator (int32_t)
			*
			* @param value The integer value you want to multiplicate with the integer variable
			* @return The result of the calculation
			*/
			float operator/(const int32_t& value) const;
			/**
			* Operator override for the multiplication operator (float)
			*
			* @param value The float value you want to divide through the integer variable.
			* @return The rounded result of the calculation
			*/
			float operator/(const float& value) const;
			/**
			* The Default Destructor of the FloatVariable class
			*/
			~FloatVariable() {};
		private:
			float m_value;
			std::string m_name; 
		};
	}
}